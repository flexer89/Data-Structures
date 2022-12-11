#include "ArrayStack.h"


ArrayStack::ArrayStack(int c)
{
    capacity = c;
    items = new int[capacity];
    top = -1;
}

bool ArrayStack::empty()
{
    if (top == -1)
    {
        return true;
    }
    return false;
}

bool ArrayStack::full()
{
    if (top == capacity-1)
    {
        return true;
    }
    return false;
}

void ArrayStack::push(int x)
{
    if (full())
    {
        std::cout << "Stack is full you can't push any value" << std::endl;
    }
    else
    {
        top += 1;
        items[top] = x;
    }
}

int ArrayStack::peek()
{
    if (!empty())
    {
        return items[top];
    }
    std::cout << "Stack is empty, there is no value (we return INT_MIN value)";
    return INT_MIN;
}

void ArrayStack::pop()
{
    if (top == -1)
    {
        std::cout << "Stack is empty, we can't pop the value";
    }
    else
    {
        items[top] = INT_MIN;
        top--;
    }
}

void ArrayStack::clear()
{
    delete[] items;
    top = -1;
    items = new int[capacity];
}


void ArrayStack::printStack()
{
    for (int i = top; i >= 0; i--)
    {
        cout << items[i] << " ";
    }
}
