#pragma once
#include <iostream>
#include "Node.h"

using std::cout;

class BSTree
{
private:
    Node* root;
public:

    /// <summary>
    /// Default constructor. Creates an empty tree
    /// </summary>
    BSTree();                      

    /// <summary>
    /// Function gets a root of a tree
    /// </summary>
    /// <returns>root of a tree</returns>
    Node* getRoot();            

    /// <summary>
    /// Function returns 1 when (sub)tree is empty, 0 otherwise
    /// </summary>
    /// <param name="p">- (sub)tree</param>
    /// <returns>1 when (sub)tree is empty, 0 otherwise</returns>
    bool empty(Node* p);   

    /// <summary>
    /// Function returns the size of (sub)tree (amount of nodes)
    /// </summary>
    /// <param name="p">- (sub)tree</param>
    /// <returns>Amount of (sub)tree nodes</returns>
    int size(Node* p);

    /// <summary>
    /// Function returns the height of (sub)tree (longest path - 1)
    /// </summary>
    /// <param name="p">- (sub)tree</param>
    /// <returns>the height of (sub)tree (longest path - 1)</returns>
    int height(Node* p);

    /// <summary>
    /// Function to do InOrder (sub)tree traversal
    /// </summary>
    /// <param name="p">- (sub)tree</param>
    void inorder(Node* p);

    /// <summary>
    /// Function to do PreOrder (sub)tree traversal
    /// </summary>
    /// <param name="p">- (sub)tree</param>
    void preorder(Node* p);

    /// <summary>
    /// Function to do PostOrder (sub)tree traversal
    /// </summary>
    /// <param name="p">- (sub)tree</param>
    void postorder(Node* p);

    /// <summary>
    /// Function adds a new Node to the tree
    /// </summary>
    /// <param name="x">- value of a Node</param>
    void insert(int x);           

    /// <summary>
    /// Function returns found Node
    /// </summary>
    /// <param name="x">- value of finding Node</param>
    /// <returns>found Node, nullptr otherwise</returns>
    Node* search(int x);       

    /// <summary>
    /// Function return a minimum stored in (sub)tree
    /// </summary>
    /// <param name="p">- (sub)tree</param>
    /// <returns>minimum stored in (sub)tree</returns>
    Node* minimum(Node* p);          

    /// <summary>
    /// Function return a maximum stored in (sub)tree
    /// </summary>
    /// <param name="p">- (sub)tree</param>
    /// <returns>maximum stored in (sub)tree</returns>
    Node* maximum(Node* p);        

    /// <summary>
    /// Function returns a Node which is a successor of given Node
    /// </summary>
    /// <param name="p">- Node to find its successor</param>
    /// <returns>if found, successor, nullptr otherwise</returns>
    Node* successor(Node* p);   

    /// <summary>
    /// Function returns a Node which is a predecessor of given Node
    /// </summary>
    /// <param name="p">- Node to find its predecessor</param>
    /// <returns>if found, predecessor, nullptr otherwise</returns>
    Node* predecessor(Node* p);    //zwraca wskaŸnik do poprzednika p

    /// <summary>
    /// Function checks if the Node is a leaf
    /// </summary>
    /// <param name="p">- Node to check</param>
    /// <returns>1 - if Node is a leaf, 0 otherwise</returns>
    bool leaf(Node* p);

    /// <summary>
    /// Function deletes indicated Node
    /// </summary>
    /// <param name="p">- Node to delete</param>
    void del(Node* p);          
};