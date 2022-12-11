#pragma once

#include <iostream>
#include "Element.h"

class LinkedFifo 
{
    private:
        Element* head;
        Element* tail;
    public:
        /// <summary>
        /// Default constructor
        /// </summary>
        LinkedFifo();

        /// <summary>
        /// This function will check if queue is empty or not
        /// </summary>
        /// <returns>True if empty else return false</returns>
        bool empty();

        /// <summary>
        /// This function will ad new element to our queue
        /// </summary>
        /// <param name="x">- value of a new element</param>
        void enqueue(int x);

        /// <summary>
        /// This function will return first element in our queue
        /// </summary>
        /// <returns>value of first element in our queue</returns>
        int peek();

        /// <summary>
        /// This function will delete first element in our queue (if exist)
        /// </summary>
        void dequeue();

        /// <summary>
        /// This function will clear our queue
        /// </summary>
        void clear();

        /// <summary>
        /// This function will print every element in queue
        /// </summary>
        /// <param name="out">- parameter which we can return every elment</param>
        /// <param name="f">- pointer to linked fifo queue</param>
        /// <returns>the messege contain every element</returns>
        friend std::ostream& operator<<(std::ostream& out, LinkedFifo* f);
};
