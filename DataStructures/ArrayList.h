#pragma once
#include <iostream>

using std::cout;
using std::endl;
using std::cin;

class ArrayList
{
private:
    int* items;                     
    int head;                       
    int tail;                       
    int capacity;                  
    int size;                       

public:
    ArrayList(int c);               //creates an empty list with a capacity of c                              
    bool empty();                   //returns true if the list is empty, false otherwise      
    bool full();                    //returns true if the list is full, false otherwise
    int getSize();                  //returns the size of the list (number of items in the list)                
    int getCapacity();              //returns list capacity (array size)                          
    int getFirst();                 //returns the position of the first item                                
    int getLast();                  //returns the position of the last item                                 
    int getNext(int p);             //returns the position of the next item after p                         
    int getPrev(int p);             //returns the position of the element preceding p                          
    int retrieve(int p);            //returns the element (value) from position p                               
    void append(int x);             //inserts an x ​​element at the end of the list                                  
    void preppend(int x);           //inserts an x ​​element at the beginning of the list
    void print();                   //displays arrays
    void insert(int p, int x);      //inserts an x ​​element at position p (operation only for existing positions)
    void del(int p);                //removes an element from p    
    void clear();                   //deletes the entire contents of the list
    int locate(int x);              //returns the position of the first occurrence of x, -1 if x is not present
    void deleteX(int x);            //removes the first occurrence of an element with value x
    void concat(ArrayList& l);      //concatenate two list
};