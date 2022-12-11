#include "Element.h"

Element::Element()
{
    v = -1;
    prev = nullptr;
    next = nullptr;
}

Element::Element(int x, Element* Next)
{
    v = x;
    next = Next;
    prev = nullptr;
}

Element::Element(int x, Element* Next, Element* Prev)
{
    v = x;
    next = Next;
    prev = Prev;
}

int Element::getValue()
{
    return v;
}

void Element::setValue(int value)
{
    v = value;
}

Element* Element::getNext()
{
    return next;
}

Element* Element::getPrev()
{
    return prev;
}

void Element::setNext(Element* p)
{
    next = p;
}

void Element::setPrev(Element* p)
{
    prev = p;
}
