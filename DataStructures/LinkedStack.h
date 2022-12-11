#pragma once
#include"iostream"

class LinkedStack 
{
    private:
        Element* top;
    public:
        /// <summary>
        /// Default constructor
        /// </summary>
        LinkedStack();

        /// <summary>
        /// This function will check if stack is empty or not
        /// </summary>
        /// <returns>True if empty else if not</returns>
        bool empty();

        /// <summary>
        /// This function will push value x to top of our stack
        /// </summary>
        /// <param name="x">- value of new top</param>
        void push(int x);

        /// <summary>
        /// This function will return value of our top
        /// </summary>
        /// <returns>value of our top</returns>
        int peek();

        /// <summary>
        /// This function will pop element from our stack
        /// </summary>
        void pop();

        /// <summary>
        /// This function will clear our stack
        /// </summary>
        void clear();

        /// <summary>
        /// This function will print every element in stack
        /// </summary>
        /// <param name="out">- parameter which we can return every elment</param>
        /// <param name="s">- pointer to linked stack</param>
        /// <returns>- the messege contain every element</returns>
        friend std::ostream& operator<<(std::ostream& out, LinkedStack* s);
};
