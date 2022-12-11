#pragma once
#include<iostream>

using std::cout;

class ArrayStack 
{
    private:
        int* items;
        int capacity;
        int top;
    public:
        /// <summary>
        /// Constructor
        /// </summary>
        /// <param name="c">- capacity of stack</param>
        ArrayStack(int c);

        /// <summary>
        /// This function will check if stack is empty or not
        /// </summary>
        /// <returns>true if empty else false</returns>
        bool empty();

        /// <summary>
        /// This function will check if stack is full or not
        /// </summary>
        /// <returns>true if empty else false</returns>
        bool full();

        /// <summary>
        /// This  function will place new value on the top of stack
        /// </summary>
        /// <param name="x">- value of new top</param>
        void push(int x);

        /// <summary>
        /// This function will return top of the stack
        /// </summary>
        /// <returns>value of top</returns>
        int peek();

        /// <summary>
        /// This function will delete top of the stack
        /// </summary>
        void pop();

        /// <summary>
        /// This function will clear every element in stack
        /// </summary>
        void clear();

        /// <summary>
        /// This function prints stack
        /// </summary>
        void printStack();
};
