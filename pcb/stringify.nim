import ropes
import strutils
import tables
import pcb.types

proc boolRope(x: bool): Rope =
  if x:
    rope("1")
  else:
    rope("0")

proc charRope(c: char): Rope =
  &[rope("'"), rope($c), rope("'")]

proc stringRope(s: Rope): Rope =
  &[rope("\""), s, rope("\"")]

proc stringRope(s: string): Rope =
  stringRope(rope(s))

proc rope(dim: Dimension): Rope =
  rope($dim)

proc rope(vec: Vector): Rope =
  &[rope(vec.x), rope(" "), rope(vec.y)]

proc rope(flags: set[PCBFlag]): Rope =
  var words: seq[string] = @[]
  for info in pcbFlagInfo:
    if info.flag in flags:
      words.add(info.text)
  result = stringRope(words.join(","))

proc rope(flags: set[ObjectFlag]): Rope =
  var words: seq[string] = @[]
  for info in objectFlagInfo:
    if info.flag in flags:
      words.add(info.text)
  result = stringRope(words.join(","))

proc rope(dir: TextDirection): Rope =
  case dir
  of leftToRight:
    rope("0")
  of bottomToTop:
    rope("1")
  of rightToLeft:
    rope("2")
  of topToBottom:
    rope("3")

proc rope(symbolLine: SymbolLine): Rope =
  &[
    rope("    SymbolLine["),
    rope(symbolLine.point1),
    rope(" "),
    rope(symbolLine.point2),
    rope(" "),
    rope(symbolLine.thickness),
    rope("]\n"),
  ]

proc rope(symbol: Symbol): Rope =
  result = &[
    rope("Symbol["),
    charRope(symbol.ch),
    rope(" "),
    rope(symbol.space),
    rope("] (\n"),
  ]
  for line in symbol.lines:
    result = result & rope(line)
  result = result & ")\n"

proc rope(symbols: Table[char, Symbol]): Rope =
  for symbol in symbols.values():
    result = result & rope(symbol)

proc rope(attributes: Table[string, string]): Rope =
  for name, value in attributes:
    result = &[
      result,
      rope("Attribute("),
      stringRope(name),
      rope(" "),
      stringRope(value),
      rope(")\n"),
    ]

proc rope(arcs: seq[ElementArc]): Rope =
  for arc in arcs:
    result = &[
      result,
      rope("    ElementArc["),
      rope(arc.center),
      rope(" "),
      rope(arc.hozRadius),
      rope(" "),
      rope(arc.vertRadius),
      rope(" "),
      rope(arc.startAngle),
      rope(" "),
      rope(arc.sweepAngle),
      rope(" "),
      rope(arc.thickness),
      rope("]\n"),
    ]

proc rope(lines: seq[ElementLine]): Rope =
  for line in lines:
    result = &[
      result,
      rope("    ElementLine["),
      rope(line.point1),
      rope(" "),
      rope(line.point2),
      rope(" "),
      rope(line.thickness),
      rope("]\n"),
    ]

proc rope(pads: seq[Pad]): Rope =
  for pad in pads:
    result = &[
      result,
      rope("    Pad["),
      rope(pad.point1),
      rope(" "),
      rope(pad.point2),
      rope(" "),
      rope(pad.metalThickness),
      rope(" "),
      rope(pad.clearance),
      rope(" "),
      rope(pad.maskThickness),
      rope(" "),
      stringRope(pad.name),
      rope(" "),
      stringRope(pad.number),
      rope(" "),
      rope(pad.flags),
      rope("]\n"),
    ]

proc rope(pins: seq[Pin]): Rope =
  for pin in pins:
    result = &[
      result,
      rope("    Pin["),
      rope(pin.center),
      rope(" "),
      rope(pin.metalDiameter),
      rope(" "),
      rope(pin.clearance),
      rope(" "),
      rope(pin.maskDiameter),
      rope(" "),
      rope(pin.drillDiameter),
      rope(" "),
      stringRope(pin.name),
      rope(" "),
      stringRope(pin.number),
      rope(" "),
      rope(pin.flags),
      rope("]\n"),
    ]

proc rope(elements: seq[Element]): Rope =
  for element in elements:
    result = &[
      result,
      rope("Element["),
      rope(element.flags),
      rope(" "),
      stringRope(element.desc),
      rope(" "),
      stringRope(element.name),
      rope(" "),
      stringRope(element.value),
      rope(" "),
      rope(element.markPos),
      rope(" "),
      rope(element.textPos),
      rope(" "),
      rope(element.textDir),
      rope(" "),
      rope(element.textScale),
      rope(" "),
      rope(element.textFlags),
      rope("] (\n"),
      rope(element.arcs),
      rope(element.lines),
      rope(element.pads),
      rope(element.pins),
      rope(")\n"),
    ]

proc rope(rats: seq[Rat]): Rope =
  for rat in rats:
    result = &[
      result,
      rope("Rat["),
      rope(rat.point1),
      rope(" "),
      rope(rat.group1),
      rope(" "),
      rope(rat.point2),
      rope(" "),
      rope(rat.group2),
      rope(" "),
      rope(rat.flags),
      rope("]\n"),
    ]

proc rope(layers: seq[Layer]): Rope =
  for layer in layers:
    result = &[
      result,
      rope("Layer("),
      rope(layer.number),
      rope(" "),
      stringRope(layer.name),
      rope(" "),
      stringRope(layer.flags),
      rope(") (\n"),
      # blah
      rope(")\n"),
    ]

proc rope(conns: seq[NetConnection]): Rope =
  for conn in conns:
    result = &[
      result,
      rope("        Connect("),
      stringRope(conn.elementName & "-" & conn.pinNumber),
      rope(")\n"),
    ]

proc rope(nets: seq[Net]): Rope =
  result = rope("NetList() (\n")
  for net in nets:
    result = &[
      result,
      rope("    Net("),
      stringRope(net.name),
      rope(" "),
      stringRope(net.style),
      rope(") (\n"),
      rope(net.connections),
      rope("    )\n"),
    ]
  result = result & rope(")\n")

proc rope*(pcb: PCB): Rope =
  &[
    rope("FileVersion["),
    rope(pcb.fileVersion),
    rope("]\n"),
    
    rope("PCB["),
    stringRope(pcb.name),
    rope(" "),
    rope(pcb.width),
    rope(" "),
    rope(pcb.height),
    rope("]\n"),
    
    rope("Grid["),
    rope(pcb.grid.step),
    rope(" "),
    rope(pcb.grid.offsetX),
    rope(" "),
    rope(pcb.grid.offsetY),
    rope(" "),
    boolRope(pcb.grid.visible),
    rope("]\n"),
    
    rope("PolyArea["),
    rope(pcb.minPolyArea),
    rope("]\n"),
    
    rope("Thermal["),
    rope(pcb.thermalFingerScale),
    rope("]\n"),
    
    rope("DRC["),
    rope(pcb.drc.bloat),
    rope(" "),
    rope(pcb.drc.shrink),
    rope(" "),
    rope(pcb.drc.line),
    rope(" "),
    rope(pcb.drc.silk),
    rope(" "),
    rope(pcb.drc.drill),
    rope(" "),
    rope(pcb.drc.ring),
    rope("]\n"),
    
    rope("Flags("),
    rope(pcb.flags),
    rope(")\n"),
    
    rope("Groups("),
    stringRope(pcb.groups),
    rope(")\n"),
    
    rope("Styles["),
    stringRope(pcb.styles),
    rope("]\n"),
    
    rope(pcb.symbols),
    rope(pcb.attributes),
    rope(pcb.elements),
    rope(pcb.rats),
    rope(pcb.layers),
    rope(pcb.nets),
  ]

proc `$`*(pcb: PCB): string =
  $rope(pcb)
