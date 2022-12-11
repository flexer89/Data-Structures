#include "heap.h"

void MinHeap::insert(int x)
{
    if (!full())
    {
        heap[size] = x;
        bottomUp(size);
        size++;
    }
    else
    {
        cout << "Heap is full!" << endl;
    }

}

void MinHeap::deleteMin()
{
    if (!empty())
    {
        size--;
        swap(heap[0], heap[size]);
        topDown(0);
    }
    else
        cout << "Heap is empty!" << endl;
}

int MinHeap::minimum()
{
    if (!empty())
        return heap[0];
    else
        cout << "Heap is empty!" << endl;
}

void MinHeap::del(int i)
{
    if (!empty())
    {
        size--;
        swap(heap[i], heap[size]);
        topDown(i);
        bottomUp(i);
    }
    else
    {
        cout << "Heap is empty!" << endl;
    }
}

MinHeap::MinHeap(int c)
{
    heap = new int[c];
    capacity = c;
    size = 0;
}

MinHeap::MinHeap()
{
    heap = new int[20]{ 12,9,10,8,7,7,5,1,11 };                 //to bottom-up
    //kopiec = new int[20]{6,9,10,8,7,7,5,1,3};                 //to top-down
    capacity = 20;
    size = 9;
}

bool MinHeap::empty()
{
    if (size == 0)
        return true;
    return false;
}

bool MinHeap::full()
{
    if (size == capacity)
        return true;
    return false;
}

int MinHeap::getLeft(int i)
{
    if ((2 * i) + 1 < size)
        return (2 * i) + 1;
    return -1;
}

int MinHeap::getRight(int i)
{
    if ((2 * i) + 2 < size)
        return (2 * i) + 2;
    return -1;
}

int MinHeap::getParent(int i)
{
    if (i == 0)
        return -1;
    return (i - 1) / 2;
}

int MinHeap::getSize()
{
    return size;
}

int MinHeap::getValue(int i)
{
    if (i >= 0 and i < size)
        return heap[i];
}

void MinHeap::bottomUp(int i)
{
    if (i > 0 and i < size)
    {
        int parent = getParent(i);

        if (heap[i] > heap[parent])
        {
            swap(heap[i], heap[parent]);
            bottomUp(parent);
        }
    }
}

void MinHeap::topDown(int i)
{
    if (i >= 0 and i < size)
    {
        int l = getLeft(i);
        int r = getRight(i);
        int parent = i;

        if (l != (-1) and heap[l] > heap[parent])
            parent = l;

        if (r != (-1) and heap[r] > heap[parent])
            parent = r;

        if (parent != i)
        {
            swap(heap[i], heap[parent]);
            topDown(parent);
        }
    }
}

void MinHeap::printHeap()
{
    for (int i = 0; i < size; i++)
    {
        cout << heap[i] << " ";
    }
}