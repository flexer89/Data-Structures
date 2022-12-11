#pragma once

class Element 
{
private:
    int v;
    Element* next;
    Element* prev;

public:
    /// <summary>
    /// This is default constructor of element
    /// </summary>
    Element();

    /// <summary>
    /// Complex constructor of element
    /// </summary>
    /// <param name="v">- value of element</param>
    /// <param name="prev">- pointer to previous element</param>
    Element(int v, Element* prev);

    /// <summary>
    /// Complex constructor of element
    /// </summary>
    /// <param name="x">- value of element</param>
    /// <param name="next">- pointer to next element</param>
    /// <param name="prev">- pointer to previous element</param>
    Element(int x, Element* next, Element* prev);

    /// <summary>
    /// This function will return value v of element
    /// </summary>
    /// <returns>value</returns>
    int getValue();

    /// <summary>
    /// This function will set value of element
    /// </summary>
    /// <param name="v">- new value of element</param>
    void setValue(int v);
 
    /// <summary>
    /// This function will return position of next element
    /// </summary>
    /// <returns>- position of next element</returns>
    Element* getNext();

    /// <summary>
    /// This function will return position of previous element
    /// </summary>
    /// <returns>position of previous element</returns>
    Element* getPrev();

    /// <summary>
    /// This function will make "p" element the next element
    /// </summary>
    /// <param name="p">- next element</param>
    void setNext(Element* p);

    /// <summary>
    /// This function will make "p" element the previous element
    /// </summary>
    /// <param name="p">- previous element</param>
    void setPrev(Element* p);

};
