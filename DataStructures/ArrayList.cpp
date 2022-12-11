#include "ArrayList.h"

void ArrayList::deleteX(int x)
{
    int j = 0;
    for (int i = 0; i <= tail; i++)
    {
        if (items[i] == x)
        {
            tail -= 1;
            size -= 1;
            i++;
        }
        items[j] = items[i];
        j++;
    }
}

int ArrayList::locate(int x)
{
    for (int i = 0; i < size; i++)
    {
        if (items[i] == x)
        {
            return i;
        }
    }
    return -1;
}

void ArrayList::insert(int p, int x)     
{
    if (p >= 0 and p < size)
    {
        for (int k = size; k >= p; k--)
        {
            items[k + 1] = items[k];
        }
        items[p] = x;
        tail++;
        size++;
    }
}

void ArrayList::del(int p)            
{
    if(p>=head && p<tail)
    {
        for(int i=p; i<=tail; i++)
        {
            items[i]=items[i+1];
        }
    }
    tail--;
    size--;

}

ArrayList::ArrayList(int c)           
{
    items = new int[c];
    capacity = c;
    head = 0;
    tail = 0;
    size = 0;
}

bool ArrayList::empty()                
{
    if (size == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

bool ArrayList::full()                  
{
    if (tail == capacity)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int ArrayList::getSize()               
{
    return size;
}

int ArrayList::getCapacity()            
{
    return capacity;
}

int ArrayList::getFirst()               
{
    return head;
}

int ArrayList::getLast()               
{
    return tail;
}

void ArrayList::append(int x)          
{
    if (!full())
    {
        items[size] = x;
        tail++;
        size++;
    }
    else
    {
        cout << "Brak miejsca!" << endl;
    }
}

int ArrayList::retrieve(int p)        
{
    if (p >= 0 and p < capacity)
    {
        return items[p];
    }
    else
    {
        return -1;
    }
}

int ArrayList::getNext(int p)           
{
    if (p >= 0 and p < size)
    {
        return p + 1;
    }
    else
    {
        return -1;
    }
}

int ArrayList::getPrev(int p)           
{
    if (p > 0 and p < size)
    {
        return p - 1;
    }
    else
    {
        return 1;
    }
}

void ArrayList::preppend(int x)         
{
    if (!full())
    {
        for (int t = tail; t >= head; t--)
        {
            items[t + 1] = items[t];
        }
        items[0] = x;
        size++;
        tail++;
    }
}

void ArrayList::concat(ArrayList& l)
{
    int j = 0;
    if (tail + l.tail < capacity)
    {
        for (int i = tail; i < tail + l.tail; i++)
        {
            items[i] = l.items[j];
            j += 1;
        }
    }
}

void ArrayList::print()                
{
    if (!empty())
    {
        for (int i = 0; i < size; i++)
        {
            cout << items[i] << " ";
        }
    }
    else
    {
        cout << "Lista jest pusta!";
    }
}

void ArrayList::clear()
{
    delete[] items;
    items = new int[capacity];
}
