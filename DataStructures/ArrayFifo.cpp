#include "ArrayFifo.h"

ArrayFifo::ArrayFifo(int c)
{
    capacity = c;
    items = new int[capacity];
    size = 0;
    head = -1;
    tail = -1;

}

bool ArrayFifo::empty()
{
    if (size == 0)
    {
        return true;
    }
    return false;
}


bool ArrayFifo::full()
{
    if (size == capacity)
    {
        return true;
    }
    return false;
}

void ArrayFifo::enqueue(int x)
{
    if (full())
    {
        std::cout << "Queue is full, you can't add any element." << std::endl;
    }
    else
    {
        if (head == -1)
        {
            head++;
            tail++;
            size++;
            items[head] = x;
        }
        else if ((tail + 1) % capacity != head)
        {
            tail++;
            size++;
            items[tail % capacity] = x;
            tail = tail % capacity;
        }
    }

}

int ArrayFifo::peek()
{
    if (empty())
    {
        std::cout << "There is no value, queue is empty ";
        return INT_MIN;
    }
    else
    {
        return items[head];
    }
}

void ArrayFifo::dequeue()
{
    if (!empty())
    {
        head = (head + 1) % capacity;
        size--;
    }
    else
    {
        std::cout << "Queue is empty! You can't dequeue any value." << std::endl;
    }
}

void ArrayFifo::clear()
{
    delete[] items;
    items = new int[capacity];
    size = 0;
    head = -1;
    tail = -1;
}

std::ostream& operator<<(std::ostream& out, ArrayFifo& f)
{
    int i = f.head;
    while (true)
    {
        out << f.items[i % f.capacity] << " ";
        if (i % f.capacity == f.tail % f.capacity)
        {
            break;
        }
        i++;
    }

    return out;
}

void ArrayFifo::printQueue()
{
    int i = head;
    while (!empty())
    {
        cout << items[i % capacity] << " ";
        if (i % capacity == tail % capacity)
        {
            break;
        }
        i++;
    }
}
