#pragma once

class Node
{
private:
    int value;
    Node* left;
    Node* right;
    Node* parent;
public:

    /// <summary>
    /// Constructor of Node class objects
    /// </summary>
    /// <param name="v">- value to store</param>
    /// <param name="l">- left son</param>
    /// <param name="r">- right son</param>
    /// <param name="p">- parent</param>
    Node(int v, Node* l, Node* r, Node* p);

    /// <summary>
    /// Function gets a value of a Node
    /// </summary>
    /// <returns>Value of a Node</returns>
    int getValue();

    /// <summary>
    /// Functions gets a left son of a Node
    /// </summary>
    /// <returns>left son of a Node</returns>
    Node* getLeft();

    /// <summary>
    /// Functions gets a right son of a Node
    /// </summary>
    /// <returns>right son of a Node</returns>
    Node* getRight();

    /// <summary>
    /// Functions gets a parent of a Node
    /// </summary>
    /// <returns>parent of a Node</returns>
    Node* getParent();

    /// <summary>
    /// Function sets a value of a Node
    /// </summary>
    /// <param name="v">- new value</param>
    void setValue(int v);

    /// <summary>
    /// Function sets a left son of a Node
    /// </summary>
    /// <param name="l">- left son of a Node</param>
    void setLeft(Node* l);

    /// <summary>
    /// Function sets a right son of a Node
    /// </summary>
    /// <param name="r">- right son of a Node</param>
    void setRight(Node* r);

    /// <summary>
    /// Function sets a parent of a Node
    /// </summary>
    /// <param name="p">- parent of a Node</param>
    void setParent(Node* p);
};
