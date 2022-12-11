#include "Node.h"

Node::Node(int v, Node* l, Node* r, Node* p)
{
    value = v;
    left = l;
    right = r;
    parent = p;
}

int Node::getValue()
{
    return value;
}

Node* Node::getLeft()
{
    return left;
}

Node* Node::getRight()
{
    return right;
}

Node* Node::getParent()
{
    return parent;
}

void Node::setValue(int v)
{
    value = v;
}

void Node::setLeft(Node* l)
{
    left = l;
}

void Node::setRight(Node* r)
{
    right = r;
}

void Node::setParent(Node* p)
{
    parent = p;
}