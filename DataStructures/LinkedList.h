#pragma once

#include "Element.h"
#include <iostream>

class LinkedList 
{
    private:
        Element* head;
        Element* tail;
        int size;

    public:

        /// <summary>
        /// Default constructor
        /// </summary>
        LinkedList();

        /// <summary>
        /// This function will check if list is empty or not
        /// </summary>
        /// <returns>true if empty else false</returns>
        bool empty();

        /// <summary>
        /// This function will return size of list
        /// </summary>
        /// <returns>size of list</returns>
        int getSize();

        /// <summary>
        /// This function will return pointer to first element of list
        /// </summary>
        /// <returns>pointer to first element of list</returns>
        Element* getFirst();

        /// <summary>
        /// This function will return pointer to last element of list
        /// </summary>
        /// <returns>pointer to last element of list</returns>
        Element* getLast();

        /// <summary>
        /// This function will return pointer to next element of list
        /// </summary>
        /// <param name="p">pointer to element before element we search for</param>
        /// <returns>pointer to the next element</returns>
        Element* getNext(Element* p);

        /// <summary>
        /// This function will return pointer to previous element of list
        /// </summary>
        /// <param name="p">pointer to element after element we search for</param>
        /// <returns>pointer to the previous element</returns>
        Element* getPrev(Element* p);

        /// <summary>
        /// This function will return value "v" of element p
        /// </summary>
        /// <param name="p">pointer to element</param>
        /// <returns>value of element p</returns>
        int retrive(Element* p);

        /// <summary>
        /// This function will return frst instance of element if exist
        /// </summary>
        /// <param name="x">x value of element</param>
        /// <returns>pointer to first instance of element if exist</returns>
        Element* locate(int x);

        /// <summary>
        /// This function will append element x to the end of the list
        /// </summary>
        /// <param name="x">value of new element</param>
        void append(int x);

        /// <summary>
        /// This function will append element x to the beggining of the list
        /// </summary>
        /// <param name="x">value of new element</param>
        void preppend(int x);

        /// <summary>
        /// This function will delete element p
        /// </summary>
        /// <param name="p">pointer to element</param>
        void del(Element* p);

        /// <summary>
        /// This function will clear all list
        /// </summary>
        void clear();

        /// <summary>
        /// This function is friendly function which we can print element in our list
        /// </summary>
        /// <param name="out">parameter in which we can spell our elements</param>
        /// <param name="l">pointer to an list</param>
        friend std::ostream& operator<<(std::ostream& out, LinkedList* l);
};
