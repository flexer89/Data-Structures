#pragma once
#include <iostream>

using namespace std;

class MinHeap {
private:
    int* heap;
    int capacity;
    int size;
public:

    /// <summary>
    /// Constructor | Creates an empty heap with capacity of c
    /// </summary>
    /// <param name="c">- capacity of a new heap</param>
    MinHeap(int c);           

    /// <summary>
    /// Constructor | Creates predefined heap to testing
    /// </summary>
    MinHeap();                

    /// <summary>
    /// Function checks if heap is empty
    /// </summary>
    /// <returns>1 - if heap is empty, 0 otherwise</returns>
    bool empty();

    /// <summary>
    /// Function checks if heap is full
    /// </summary>
    /// <returns>1 - if heap is full, 0 otherwise</returns>
    bool full();

    /// <summary>
    /// Function returns Left Child index
    /// </summary>
    /// <param name="i">- index to check</param>
    /// <returns>Left Child index</returns>
    int getLeft(int i);                    

    /// <summary>
    /// Function returns Right Child index
    /// </summary>
    /// <param name="i">- index to check</param>
    /// <returns>Right Child index</returns>
    int getRight(int i);                    

    /// <summary>
    /// Function returns Parent index
    /// </summary>
    /// <param name="i">- index to check</param>
    /// <returns>Parent index</returns>
    int getParent(int i);                   

    /// <summary>
    /// Function returns size of heap
    /// </summary>
    /// <returns>Size of heap</returns>
    int getSize();                          

    /// <summary>
    /// Function gets a value from index i
    /// </summary>
    /// <param name="i">- index to check</param>
    /// <returns>Value from index i</returns>
    int getValue(int i);                    

    /// <summary>
    /// Heapify bottom-up
    /// </summary>
    /// <param name="i">- index to start </param>
    void bottomUp(int i);                

    /// <summary>
    /// Heapify top-down
    /// </summary>
    /// <param name="i">- index to start</param>
    void topDown(int i);                    

    /// <summary>
    /// Function prints heap content
    /// </summary>
    void printHeap();               

    /// <summary>
    /// Function inserts a new element to heap
    /// </summary>
    /// <param name="x">- value to add</param>
    void insert(int x);                    

    /// <summary>
    /// Function deletes minimum value
    /// </summary>
    void deleteMin();                       

    /// <summary>
    /// Function returns minimum value
    /// </summary>
    /// <returns>minimum value</returns>
    int minimum();                          

    /// <summary>
    /// Function deletes element from i index
    /// </summary>
    /// <param name="i">- index to delete</param>
    void del(int i);                       
};
