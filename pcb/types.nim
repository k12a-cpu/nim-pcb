import strutils
import tables

type
  Dimension* = distinct int
  
  Vector* = tuple
    x, y: Dimension
  
  PCBFlag* = enum
    pfShowNumber
    pfLocalRef
    pfCheckPlanes
    pfShowDRC
    pfRubberband
    pfDescription
    pfNameOnPCB
    pfAutoDRC
    pfAllDirection
    pfSwapStartDir
    pfUniqueName
    pfClearNew
    pfSnapPin
    pfShowMask
    pfThinDraw
    pfOrthomove
    pfLiveRoute
    pfThinDrawPoly
    pfLockNames
    pfOnlyNames
    pfNewFullPoly
    pfHideNames
  
  ObjectFlag* = enum
    ofPin
    ofVia
    ofFound
    ofHole
    ofNoPaste
    ofRat
    ofPinInPoly
    ofClearPoly
    ofHideName
    ofShowName
    ofClearLine
    ofFullPoly
    ofSelected
    ofOnSolder
    ofAuto
    ofSquare
    ofRubberEnd
    ofWarn
    ofUseTherm
    ofSilkLine
    ofOctagon
    ofDRC
    ofLock
    ofEdge2
    ofMarker
    ofConnected

  ObjectFlagsContext* = enum
    ofcArc
    ofcElement
    ofcElementText
    ofcLine
    ofcPad
    ofcPin
    ofcPolygon
    ofcRat
    ofcVia
  
  TextDirection* = enum
    leftToRight
    bottomToTop
    rightToLeft
    topToBottom
  
  DRC* = tuple
    bloat: Dimension
    shrink: Dimension
    line: Dimension
    silk: Dimension
    drill: Dimension
    ring: Dimension
  
  Grid* = tuple
    step: float
    offsetX: Dimension
    offsetY: Dimension
    visible: bool
  
  SymbolLine* = tuple
    point1: Vector
    point2: Vector
    thickness: Dimension
  
  Symbol* = tuple
    ch: char
    space: Dimension
    lines: seq[SymbolLine]
  
  ElementArc* = tuple
    center: Vector
    hozRadius: Dimension
    vertRadius: Dimension
    startAngle: int
    sweepAngle: int
    thickness: Dimension
  
  ElementLine* = tuple
    point1: Vector
    point2: Vector
    thickness: Dimension
  
  Pad* = tuple
    point1: Vector
    point2: Vector
    metalThickness: Dimension
    clearance: Dimension
    maskThickness: Dimension
    name: string
    number: string
    flags: set[ObjectFlag]
  
  Pin* = tuple
    center: Vector
    metalDiameter: Dimension
    clearance: Dimension
    maskDiameter: Dimension
    drillDiameter: Dimension
    name: string
    number: string
    flags: set[ObjectFlag]
    thermals: seq[int]
  
  Element* = tuple
    flags: set[ObjectFlag]
    desc: string
    name: string
    value: string
    markPos: Vector
    textPos: Vector
    textDir: TextDirection
    textScale: int
    textFlags: set[ObjectFlag]
    arcs: seq[ElementArc]
    lines: seq[ElementLine]
    pads: seq[Pad]
    pins: seq[Pin]
  
  Rat* = tuple
    point1: Vector
    group1: int
    point2: Vector
    group2: int
    flags: set[ObjectFlag]
  
  Line* = tuple
    point1: Vector
    point2: Vector
    thickness: Dimension
    clearance: Dimension
    flags: set[ObjectFlag]
  
  Polygon* = tuple
    flags: set[ObjectFlag]
    vertices: seq[Vector]
  
  Layer* = tuple
    number: int
    name: string
    flags: string
    lines: seq[Line]
    polygons: seq[Polygon]
  
  NetConnection* = tuple
    elementName: string
    pinNumber: string
  
  Net* = tuple
    name: string
    style: string
    connections: seq[NetConnection]
  
  PCB* = tuple
    fileVersion: int
    name: string
    width: Dimension
    height: Dimension
    grid: Grid
    minPolyArea: float
    thermalFingerScale: float
    drc: DRC
    flags: set[PCBFlag]
    groups: string
    styles: string
    symbols: Table[char, Symbol]
    attributes: Table[string, string]
    elements: Table[string, Element]
    rats: seq[Rat]
    layers: seq[Layer]
    nets: seq[Net]

proc `$`*(x: Dimension): string {.noSideEffect.} =
  formatFloat(float(x) / 100.0, format = ffDecimal, precision = 2) & "mil"

proc `$`*(v: Vector): string {.noSideEffect.} =
  "(" & $v.x & ", " & $v.y & ")"

proc `+`*(a, b: Dimension): Dimension {.noSideEffect.} =
  Dimension(int(a) + int(b))

proc `-`*(a, b: Dimension): Dimension {.noSideEffect.} =
  Dimension(int(a) - int(b))

proc `*`*(a: Dimension, b: int): Dimension {.noSideEffect.} =
  Dimension(int(a) * b)

proc `*`*(a: int, b: Dimension): Dimension {.noSideEffect.} =
  Dimension(a * int(b))

proc `/`*(a: Dimension, b: int): Dimension {.noSideEffect.} =
  Dimension(int(a) / b)

proc `-`*(a: Dimension): Dimension {.noSideEffect.} =
  Dimension(-int(a))

proc `+`*(a, b: Vector): Vector {.noSideEffect.} =
  (x: a.x + b.x, y: a.y + b.y)

proc `-`*(a, b: Vector): Vector {.noSideEffect.} =
  (x: a.x - b.x, y: a.y - b.y)

proc `*`*(a: Vector, b: int): Vector {.noSideEffect.} =
  (x: a.x * b, y: a.y * b)

proc `*`*(a: int, b: Vector): Vector {.noSideEffect.} =
  (x: a * b.x, y: a * b.y)

proc `/`*(a: Vector, b: int): Vector {.noSideEffect.} =
  (x: a.x / b, y: a.y / b)

proc `-`*(a: Vector): Vector {.noSideEffect.} =
  (x: -a.x, y: -a.y)

proc `+=`*(a: var Dimension, b: Dimension) =
  a = Dimension(int(a) + int(b))

proc `-=`*(a: var Dimension, b: Dimension) =
  a = Dimension(int(a) - int(b))

proc `*=`*(a: var Dimension, b: int) =
  a = Dimension(int(a) * b)

proc `/=`*(a: var Dimension, b: int) =
  a = Dimension(int(a) / b)

proc `+=`*(a: var Vector, b: Vector) =
  a.x += b.x
  a.y += b.y

proc `-=`*(a: var Vector, b: Vector) =
  a.x -= b.x
  a.y -= b.y

proc `*=`*(a: var Vector, b: int) =
  a.x *= b
  a.y *= b

proc `/=`*(a: var Vector, b: int) =
  a.x /= b
  a.y /= b

proc mil*(x: float): Dimension {.noSideEffect.} =
  Dimension(x * 100.0)

proc inches*(x: float): Dimension {.noSideEffect.} =
  mil(x * 1000.0)

proc mm*(x: float): Dimension {.noSideEffect.} =
  mil(x * 39.3701)

proc cm*(x: float): Dimension {.noSideEffect.} =
  mm(x * 10.0)

const defaultPCBWidth* = 10.cm()
const defaultPCBHeight* = 10.cm()

proc init*(vector: var Vector) =
  vector.x = Dimension(0)
  vector.y = Dimension(0)

proc init*(drc: var DRC) =
  drc.bloat = Dimension(0)
  drc.shrink = Dimension(0)
  drc.line = Dimension(0)
  drc.silk = Dimension(0)
  drc.drill = Dimension(0)
  drc.ring = Dimension(0)

proc init*(grid: var Grid) =
  grid.step = 0.0
  grid.offsetX = Dimension(0)
  grid.offsetY = Dimension(0)
  grid.visible = false

proc init*(symbolLine: var SymbolLine) =
  symbolLine.point1.init()
  symbolLine.point2.init()
  symbolLine.thickness = Dimension(0)

proc init*(symbol: var Symbol) =
  symbol.ch = '\0'
  symbol.space = Dimension(0)
  symbol.lines = @[]

proc init*(element: var Element) =
  element.flags = {}
  element.desc = ""
  element.name = ""
  element.value = ""
  element.markPos.init()
  element.textPos.init()
  element.textDir = leftToRight
  element.textScale = 0
  element.textFlags = {}
  element.arcs = @[]
  element.lines = @[]
  element.pads = @[]
  element.pins = @[]

proc init*(rat: var Rat) =
  rat.point1.init()
  rat.group1 = 0
  rat.point2.init()
  rat.group2 = 0
  rat.flags = {}

proc init*(layer: var Layer) =
  layer.number = 0
  layer.name = ""
  layer.flags = ""
  layer.lines = @[]
  layer.polygons = @[]

proc initLayer*(): Layer =
  result.init()

proc init*(conn: var NetConnection) =
  conn.elementName = ""
  conn.pinNumber = ""

proc init*(net: var Net) =
  net.name = ""
  net.style = ""
  net.connections = @[]

proc init*(pcb: var PCB) =
  pcb.fileVersion = 0
  pcb.name = ""
  pcb.width = Dimension(0)
  pcb.height = Dimension(0)
  pcb.grid.init()
  pcb.minPolyArea = 0.0
  pcb.thermalFingerScale = 0.0
  pcb.drc.init()
  pcb.flags = {}
  pcb.groups = ""
  pcb.styles = ""
  pcb.symbols = initTable[char, Symbol]()
  pcb.attributes = initTable[string, string]()
  pcb.elements = initTable[string, Element]()
  pcb.rats = @[]
  pcb.layers = @[]
  pcb.nets = @[]

const pcbFlagInfo* = @[
  (flag: pfShowNumber,   binary: 0x00000001u32, text: "shownumber"),
  (flag: pfLocalRef,     binary: 0x00000002u32, text: "localref"),
  (flag: pfCheckPlanes,  binary: 0x00000004u32, text: "checkplanes"),
  (flag: pfShowDRC,      binary: 0x00000008u32, text: "showdrc"),
  (flag: pfRubberband,   binary: 0x00000010u32, text: "rubberband"),
  (flag: pfDescription,  binary: 0x00000020u32, text: "description"),
  (flag: pfNameOnPCB,    binary: 0x00000040u32, text: "nameonpcb"),
  (flag: pfAutoDRC,      binary: 0x00000080u32, text: "autodrc"),
  (flag: pfAllDirection, binary: 0x00000100u32, text: "alldirection"),
  (flag: pfSwapStartDir, binary: 0x00000200u32, text: "swapstartdir"),
  (flag: pfUniqueName,   binary: 0x00000400u32, text: "uniquename"),
  (flag: pfClearNew,     binary: 0x00000800u32, text: "clearnew"),
  (flag: pfSnapPin,      binary: 0x00001000u32, text: "snappin"),
  (flag: pfShowMask,     binary: 0x00002000u32, text: "showmask"),
  (flag: pfThinDraw,     binary: 0x00004000u32, text: "thindraw"),
  (flag: pfOrthomove,    binary: 0x00008000u32, text: "orthomove"),
  (flag: pfLiveRoute,    binary: 0x00010000u32, text: "liveroute"),
  (flag: pfThinDrawPoly, binary: 0x00020000u32, text: "thindrawpoly"),
  (flag: pfLockNames,    binary: 0x00040000u32, text: "locknames"),
  (flag: pfOnlyNames,    binary: 0x00080000u32, text: "onlynames"),
  (flag: pfNewFullPoly,  binary: 0x00100000u32, text: "newfullpoly"),
  (flag: pfHideNames,    binary: 0x00200000u32, text: "hidenames"),
]

const ofcAll = {ofcArc .. ofcVia}

const objectFlagInfo* = @[
  (flag: ofPin,       binary: 0x00000001u32, text: "pin",       validContexts: ofcAll),
  (flag: ofVia,       binary: 0x00000002u32, text: "via",       validContexts: ofcAll),
  (flag: ofFound,     binary: 0x00000004u32, text: "found",     validContexts: ofcAll),
  (flag: ofHole,      binary: 0x00000008u32, text: "hole",      validContexts: {ofcPin, ofcVia}),
  (flag: ofNoPaste,   binary: 0x00000008u32, text: "nopaste",   validContexts: {ofcPad}),
  (flag: ofRat,       binary: 0x00000010u32, text: "rat",       validContexts: {ofcLine}),
  (flag: ofPinInPoly, binary: 0x00000010u32, text: "pininpoly", validContexts: {ofcPad, ofcPin}),
  (flag: ofClearPoly, binary: 0x00000010u32, text: "clearpoly", validContexts: {ofcPolygon}),
  (flag: ofHideName,  binary: 0x00000010u32, text: "hidename",  validContexts: {ofcElement}),
  (flag: ofShowName,  binary: 0x00000020u32, text: "showname",  validContexts: {ofcElement}),
  (flag: ofClearLine, binary: 0x00000020u32, text: "clearline", validContexts: {ofcArc, ofcLine}),
  (flag: ofFullPoly,  binary: 0x00000020u32, text: "fullpoly",  validContexts: {ofcPolygon}),
  (flag: ofSelected,  binary: 0x00000040u32, text: "selected",  validContexts: ofcAll),
  (flag: ofOnSolder,  binary: 0x00000080u32, text: "onsolder",  validContexts: {ofcElement, ofcPad}),
  (flag: ofAuto,      binary: 0x00000080u32, text: "auto",      validContexts: {ofcLine, ofcVia}),
  (flag: ofSquare,    binary: 0x00000100u32, text: "square",    validContexts: ofcAll),
  (flag: ofRubberEnd, binary: 0x00000200u32, text: "rubberend", validContexts: {ofcLine}),
  (flag: ofWarn,      binary: 0x00000200u32, text: "warn",      validContexts: {ofcPad, ofcPin, ofcVia}),
  (flag: ofUseTherm,  binary: 0x00000400u32, text: "usetherm",  validContexts: {ofcPin, ofcVia}),
  (flag: ofSilkLine,  binary: 0x00000400u32, text: nil,         validContexts: {ofcArc, ofcLine}),
  (flag: ofOctagon,   binary: 0x00000800u32, text: "octagon",   validContexts: ofcAll),
  (flag: ofDRC,       binary: 0x00001000u32, text: "drc",       validContexts: ofcAll),
  (flag: ofLock,      binary: 0x00002000u32, text: "lock",      validContexts: ofcAll),
  (flag: ofEdge2,     binary: 0x00004000u32, text: "edge2",     validContexts: ofcAll),
  (flag: ofMarker,    binary: 0x00008000u32, text: "marker",    validContexts: ofcAll),
  (flag: ofConnected, binary: 0x00010000u32, text: "connected", validContexts: ofcAll),
]
