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
