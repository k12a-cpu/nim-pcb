import pcb.types

proc findElement*(pcb: PCB, name: string): Element =
  for element in pcb.elements:
    if element.name == name:
      return element
  raise newException(KeyError, "no element named '" & name & "' exists in the layout")

proc mfindElement*(pcb: var PCB, name: string): var Element =
  for element in pcb.elements.mitems():
    if element.name == name:
      return element
  raise newException(KeyError, "no element named '" & name & "' exists in the layout")

proc rotateCW(vec: var Vector) =
  swap(vec.x, vec.y)
  vec.x = -vec.x

proc rotateCCW(vec: var Vector) =
  swap(vec.x, vec.y)
  vec.y = -vec.y

proc rotate180(vec: var Vector) =
  vec.x = -vec.x
  vec.y = -vec.y

proc rotateCW(dir: var TextDirection) =
  dir =
    case dir
    of leftToRight: topToBottom
    of bottomToTop: leftToRight
    of rightToLeft: bottomToTop
    of topToBottom: rightToLeft

proc rotateCCW(dir: var TextDirection) =
  dir =
    case dir
    of leftToRight: bottomToTop
    of bottomToTop: rightToLeft
    of rightToLeft: topToBottom
    of topToBottom: leftToRight

proc rotate180(dir: var TextDirection) =
  dir =
    case dir
    of leftToRight: rightToLeft
    of bottomToTop: topToBottom
    of rightToLeft: leftToRight
    of topToBottom: bottomToTop

proc rotateCW*(element: var Element) =
  element.textPos.rotateCW()
  element.textDir.rotateCW()
  for arc in element.arcs.mitems():
    arc.center.rotateCW()
    swap(arc.hozRadius, arc.vertRadius)
    arc.startAngle = (arc.startAngle + 270) mod 360
  for line in element.lines.mitems():
    line.point1.rotateCW()
    line.point2.rotateCW()
  for pad in element.pads.mitems():
    pad.point1.rotateCW()
    pad.point2.rotateCW()
  for pin in element.pins.mitems():
    pin.center.rotateCW()

proc rotateCCW*(element: var Element) =
  element.textPos.rotateCCW()
  element.textDir.rotateCCW()
  for arc in element.arcs.mitems():
    arc.center.rotateCCW()
    swap(arc.hozRadius, arc.vertRadius)
    arc.startAngle = (arc.startAngle + 90) mod 360
  for line in element.lines.mitems():
    line.point1.rotateCCW()
    line.point2.rotateCCW()
  for pad in element.pads.mitems():
    pad.point1.rotateCCW()
    pad.point2.rotateCCW()
  for pin in element.pins.mitems():
    pin.center.rotateCCW()

proc rotate180*(element: var Element) =
  element.textPos.rotate180()
  element.textDir.rotate180()
  for arc in element.arcs.mitems():
    arc.center.rotate180()
    arc.startAngle = (arc.startAngle + 180) mod 360
  for line in element.lines.mitems():
    line.point1.rotate180()
    line.point2.rotate180()
  for pad in element.pads.mitems():
    pad.point1.rotate180()
    pad.point2.rotate180()
  for pin in element.pins.mitems():
    pin.center.rotate180()
