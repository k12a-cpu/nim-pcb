from os import parentDir
import strutils
import tables
import pcb.types

{.compile: "lexer_gen.c".}
{.compile: "parser_gen.c".}
{.passC: ("-I" & parentDir(currentSourcePath())).}

var lineno {.header: "lexer_gen.h", importc: "nimpcb_yylineno".}: int

var thePCB: PCB
var theElement: Element
var theLayer: Layer
var theNet: Net
var theSymbol: Symbol

proc parseError(msg: string) =
  # echo "nimpcb_yyerror"
  raise newException(Exception, "parse error on line " & $lineno & ": " & msg)

proc parseError(msg: cstring) {.cdecl, exportc: "nimpcb_yyerror".} =
  # echo "nimpcb_yyerror"
  parseError($msg)

proc parsePCBFlagString(word: string): uint32 =
  for info in pcbFlagInfo:
    if info.text != nil and info.text == word:
      return info.binary
  parseError("bad PCB flag: " & word)
  return 0

proc parseObjectFlagString(word: string): uint32 =
  for info in objectFlagInfo:
    if info.text != nil and info.text == word:
      return info.binary
  parseError("bad object flag: " & word)
  return 0

proc parsePCBFlagsString(cstr: cstring): uint32 {.cdecl, exportc: "nimpcb_parse_pcb_flags_string".} =
  for word in ($cstr).split(','):
    result = result or parsePCBFlagString(word)

proc parseObjectFlagsString(cstr: cstring): uint32 {.cdecl, exportc: "nimpcb_parse_object_flags_string".} =
  for word in ($cstr).split(','):
    result = result or parseObjectFlagString(word)

proc decodePCBFlags(x: uint32): set[PCBFlag] {.noSideEffect.} =
  for info in pcbFlagInfo:
    if (x and info.binary) != 0:
      result.incl(info.flag)

proc decodeObjectFlags(x: uint32, ctx: ObjectFlagsContext): set[ObjectFlag] {.noSideEffect.} =
  for info in objectFlagInfo:
    if (x and info.binary) != 0 and ctx in info.validContexts:
      result.incl(info.flag)

proc processAttribute(name, value: cstring) {.cdecl, exportc: "nimpcb_process_attribute".} =
  # echo "nimpcb_process_attribute"
  thePCB.attributes[$name] = $value

proc processConnect(cstr: cstring) {.cdecl, exportc: "nimpcb_process_connect".} =
  let str = $cstr
  let sepIndex = str.find('-')
  if sepIndex < 0:
    parseError("invalid Connect syntax (node string should be of the format \"refdes-pin\")")
  else:
    theNet.connections.add((
      elementName: str[0 .. sepIndex-1],
      pinNumber: str[sepIndex+1 .. str.len()-1],
    ))

proc processDRC(bloat, shrink, line, silk, drill, ring: int64) {.cdecl, exportc: "nimpcb_process_drc".} =
  # echo "nimpcb_process_drc"
  thePCB.drc.bloat = Dimension(bloat)
  thePCB.drc.shrink = Dimension(shrink)
  thePCB.drc.line = Dimension(line)
  thePCB.drc.silk = Dimension(silk)
  thePCB.drc.drill = Dimension(drill)
  thePCB.drc.ring = Dimension(ring)

proc processElementStart(flags: uint32, desc, name, value: cstring, hasMark, markX, markY, textX, textY, textDir, textScale: int64, textFlags: uint32) {.cdecl, exportc: "nimpcb_process_element_start".} =
  # echo "nimpcb_process_element_start"
  theElement.init()
  theElement.flags = decodeObjectFlags(flags, ofcElement)
  theElement.desc = $desc
  theElement.name = $name
  theElement.value = $value
  if hasMark != 0:
    theElement.markPos = (x: Dimension(markX), y: Dimension(markY))
  theElement.textPos = (x: Dimension(textX), y: Dimension(textY))
  case textDir
  of 0:
    theElement.textDir = leftToRight
  of 1:
    theElement.textDir = bottomToTop
  of 2:
    theElement.textDir = rightToLeft
  of 3:
    theElement.textDir = topToBottom
  else:
    parseError("invalid text direction: " & $textDir)
  theElement.textScale = int(textScale)
  theElement.textFlags = decodeObjectFlags(textFlags, ofcElementText)

proc processElementEnd() {.cdecl, exportc: "nimpcb_process_element_end".} =
  # echo "nimpcb_process_element_end"
  thePCB.elements[theElement.name] = theElement

proc processElemElementArc(isAbsolute, x, y, width, height, startAngle, sweepAngle, thickness: int64) {.cdecl, exportc: "nimpcb_process_elem_elementarc".} =
  # echo "nimpcb_process_elem_elementarc"
  let rawCenter = (x: Dimension(x), y: Dimension(y))
  let center =
    if isAbsolute != 0:
      rawCenter - theElement.markPos
    else:
      rawCenter
  theElement.arcs.add((
    center: center,
    hozRadius: Dimension(width),
    vertRadius: Dimension(height),
    startAngle: int(startAngle),
    sweepAngle: int(sweepAngle),
    thickness: Dimension(thickness),
  ))

proc processElemElementLine(isAbsolute, x1, y1, x2, y2, thickness: int64) {.cdecl, exportc: "nimpcb_process_elem_elementline".} =
  # echo "nimpcb_process_elem_elementline"
  let rawPoint1 = (x: Dimension(x1), y: Dimension(y1))
  let rawPoint2 = (x: Dimension(x2), y: Dimension(y2))
  let (point1, point2) =
    if isAbsolute != 0:
      (rawPoint1 - theElement.markPos, rawPoint2 - theElement.markPos)
    else:
      (rawPoint1, rawPoint2)
  theElement.lines.add((
    point1: point1,
    point2: point2,
    thickness: Dimension(thickness),
  ))

proc processElemPad(isAbsolute, x1, y1, x2, y2, thickness, clearance, mask: int64, name, number: cstring, flags: uint32) {.cdecl, exportc: "nimpcb_process_elem_pad".} =
  # echo "nimpcb_process_elem_pad"
  let rawPoint1 = (x: Dimension(x1), y: Dimension(y1))
  let rawPoint2 = (x: Dimension(x2), y: Dimension(y2))
  let (point1, point2) =
    if isAbsolute != 0:
      (rawPoint1 - theElement.markPos, rawPoint2 - theElement.markPos)
    else:
      (rawPoint1, rawPoint2)
  theElement.pads.add((
    point1: point1,
    point2: point2,
    metalThickness: Dimension(thickness),
    clearance: Dimension(clearance),
    maskThickness: Dimension(mask),
    name: $name,
    number: $number,
    flags: decodeObjectFlags(flags, ofcPad),
  ))

proc processElemPin(isAbsolute, x, y, thickness, clearance, mask, drill: int64, name, number: cstring, flags: uint32) {.cdecl, exportc: "nimpcb_process_elem_pin".} =
  # echo "nimpcb_process_elem_pin"
  let rawCenter = (x: Dimension(x), y: Dimension(y))
  let center =
    if isAbsolute != 0:
      rawCenter - theElement.markPos
    else:
      rawCenter
  theElement.pins.add((
    center: center,
    metalDiameter: Dimension(thickness),
    clearance: Dimension(clearance),
    maskDiameter: Dimension(mask),
    drillDiameter: Dimension(drill),
    name: $name,
    number: $number,
    flags: decodeObjectFlags(flags, ofcPin),
    thermals: @[],
  ))

proc processFileVersion(version: int64) {.cdecl, exportc: "nimpcb_process_fileversion".} =
  # echo "nimpcb_process_fileversion"
  thePCB.fileVersion = int(version)

proc processFlags(flags: uint32) {.cdecl, exportc: "nimpcb_process_flags".} =
  # echo "nimpcb_process_flags"
  thePCB.flags = decodePCBFlags(flags)

proc processGrid(step: float, offsetX, offsetY, visible: int64) {.cdecl, exportc: "nimpcb_process_grid".} =
  # echo "nimpcb_process_grid"
  thePCB.grid.step = step
  thePCB.grid.offsetX = Dimension(offsetX)
  thePCB.grid.offsetY = Dimension(offsetY)
  thePCB.grid.visible = visible != 0

proc processGroups(groups: cstring) {.cdecl, exportc: "nimpcb_process_groups".} =
  # echo "nimpcb_process_groups"
  thePCB.groups = $groups

proc processLayerStart(number: int64, name, flags: cstring) {.cdecl, exportc: "nimpcb_process_layer_start".} =
  # echo "nimpcb_process_layer_start"
  theLayer.init()
  theLayer.number = int(number)
  theLayer.name = $name
  theLayer.flags = $flags

proc processLayerEnd() {.cdecl, exportc: "nimpcb_process_layer_end".} =
  # echo "nimpcb_process_layer_end"
  thePCB.layers.add(theLayer)

proc processLine(x1, y1, x2, y2, thickness, clearance: int, flags: uint32) {.cdecl, exportc: "nimpcb_process_line".} =
  # echo "nimpcb_process_line"
  theLayer.lines.add((
    point1: (x: Dimension(x1), y: Dimension(y1)),
    point2: (x: Dimension(x2), y: Dimension(y2)),
    thickness: Dimension(thickness),
    clearance: Dimension(clearance),
    flags: decodeObjectFlags(flags, ofcLine),
  ))

proc processNetStart(name, style: cstring) {.cdecl, exportc: "nimpcb_process_net_start".} =
  # echo "nimpcb_process_net_start"
  theNet.init()
  theNet.name = $name
  theNet.style = $style

proc processNetEnd() {.cdecl, exportc: "nimpcb_process_net_end".} =
  # echo "nimpcb_process_net_end"
  thePCB.nets.add(theNet)

proc processNetListStart() {.cdecl, exportc: "nimpcb_process_netlist_start".} =
  # echo "nimpcb_process_netlist_start"
  discard

proc processNetListEnd() {.cdecl, exportc: "nimpcb_process_netlist_end".} =
  # echo "nimpcb_process_netlist_end"
  discard

proc processPCB(name: cstring, width, height: int64) {.cdecl, exportc: "nimpcb_process_pcb".} =
  # echo "nimpcb_process_pcb"
  thePCB.name = $name
  thePCB.width = Dimension(width)
  thePCB.height = Dimension(height)

proc processPCB(name: cstring) {.cdecl, exportc: "nimpcb_process_pcb_default_size"} =
  # echo "nimpcb_process_pcb_default_size"
  thePCB.name = $name
  thePCB.width = defaultPCBWidth
  thePCB.height = defaultPCBHeight

proc processPolyArea(minArea: float) {.cdecl, exportc: "nimpcb_process_polyarea".} =
  # echo "nimpcb_process_polyarea"
  thePCB.minPolyArea = minArea

proc processRat(x1, y1, group1, x2, y2, group2: int64, flags: uint32) {.cdecl, exportc: "nimpcb_process_rat".} =
  # echo "nimpcb_process_rat"
  thePCB.rats.add((
    point1: (x: Dimension(x1), y: Dimension(y1)),
    group1: int(group1),
    point2: (x: Dimension(x2), y: Dimension(y2)),
    group2: int(group2),
    flags: decodeObjectFlags(flags, ofcRat),
  ))

proc processStyles(styles: cstring) {.cdecl, exportc: "nimpcb_process_styles".} =
  # echo "nimpcb_process_styles"
  thePCB.styles = $styles

proc processSymbolStart(ch: char, space: int64) {.cdecl, exportc: "nimpcb_process_symbol_start".} =
  # echo "nimpcb_process_symbol_start"
  theSymbol.init()
  theSymbol.ch = ch
  theSymbol.space = Dimension(space)

proc processSymbolEnd() {.cdecl, exportc: "nimpcb_process_symbol_end".} =
  # echo "nimpcb_process_symbol_end"
  thePCB.symbols[theSymbol.ch] = theSymbol

proc processSymbolLine(x1, y1, x2, y2, thickness: int64) {.cdecl, exportc: "nimpcb_process_symbolline".} =
  # echo "nimpcb_process_symbolline"
  theSymbol.lines.add((
    point1: (x: Dimension(x1), y: Dimension(y1)),
    point2: (x: Dimension(x2), y: Dimension(y2)),
    thickness: Dimension(thickness),
  ))

proc processThermal(fingerScale: float) {.cdecl, exportc: "nimpcb_process_thermal".} =
  # echo "nimpcb_process_thermal"
  thePCB.thermalFingerScale = fingerScale

proc parseStdinInternal() {.cdecl, header: "parser.h", importc: "nimpcb_parse_stdin".}
proc parseFileInternal(filename: cstring) {.cdecl, header: "parser.h", importc: "nimpcb_parse_file".}

proc parseStdin*(): PCB =
  thePCB.init()
  parseStdinInternal()
  result = thePCB

proc parseFile*(filename: string): PCB =
  thePCB.init()
  parseFileInternal(filename)
  result = thePCB
