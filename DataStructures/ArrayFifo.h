#pragma once
#include<iostream>

using std::cout;

class ArrayFifo 
{
    private:
        int* items;
        int capacity;
        int size;
        int head;
        int tail;
    public:

        /// <summary>
        /// Constructor
        /// </summary>
        /// <param name="c">- c capacity of queue</param>
        ArrayFifo(int c);

        /// <summary>
        /// This function will check if queue is empty or not
        /// </summary>
        /// <returns>True if empty else false</returns>
        bool empty();

        /// <summary>
        /// This function will check if queue is full or not
        /// </summary>
        /// <returns>True if full else false</returns>
        bool full();

        /// <summary>
        /// This function will add value to queue
        /// </summary>
        /// <param name="x">- value of new 'element' in queue</param>
        void enqueue(int x);

        /// <summary>
        /// This function will return 
        /// </summary>
        /// <returns>first value in queue</returns>
        int peek();

        /// <summary>
        /// This function will delete element from queue
        /// </summary>
        void dequeue();

        /// <summary>
        /// This function will delete every element in our list
        /// </summary>
        void clear();

        /// <summary>
        /// This function will print every element in queue
        /// </summary>
        /// <param name="out">- parameter which we can return every elment</param>
        /// <param name="f">- address to array fifo</param>
        /// <returns>the messege contains every element</returns>
        friend std::ostream& operator<<(std::ostream& out, ArrayFifo& f);

        void printQueue();
};
