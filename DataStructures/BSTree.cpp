#include "BSTree.h"

BSTree::BSTree()
{
    root = nullptr;
}

Node* BSTree::getRoot()
{
    return root;
}

bool BSTree::empty(Node* p)
{
    if (p == nullptr)
        return true;
    return false;
}

int BSTree::size(Node* p)
{
    if (empty(p))
        return 0;
    else
        return (1 + size(p->getLeft()) + size(p->getRight()));
}

int BSTree::height(Node* p)
{
    if (empty(p))
        return -1;
    else
        return (1 + std::max(height(p->getLeft()), height(p->getRight())));
}

void BSTree::preorder(Node* p)
{
    if (empty(p))
        return;
 
    //first print data of node 
    cout << p->getValue() << " ";
 
    //then recur on left subtree
    preorder(p->getLeft());
 
    //last recur on right subtree
    preorder(p->getRight());
}

void BSTree::inorder(Node* p)
{
    if (empty(p))
        return;
    //first recur on left child
    inorder(p->getLeft());

    //then print the data of node
    cout << p->getValue() << " ";

    //last recur on right child
    inorder(p->getRight());
}

void BSTree::postorder(Node* p)
{
    if (empty(p))
        return;

    //first recur on left subtree
    postorder(p->getLeft());

    //then recur on right subtree
    postorder(p->getRight());

    //last print data of node
    cout << p->getValue() << " ";
}

void BSTree::insert(int x)
{
    Node* node = new Node(x, nullptr, nullptr, nullptr);

    if (empty(root))
    {
        root = node;
        return;
    }

    //temporary variables of current parent and inserted Node
    Node* prev = nullptr;
    Node* temp = root;

    //iteration from the root until finding free space
    while (!empty(temp))
    {
        if (temp->getValue() > x)
        {
            prev = temp;
            temp = temp->getLeft();
        }
        else if (temp->getValue() < x)
        {
            prev = temp;
            temp = temp->getRight();
        }
    }

    //temp is now a node, which son will be inserted Node
    //decision whether it will left or right son
    if (prev->getValue() > x)
        prev->setLeft(node);
    else
        prev->setRight(node);
}

Node* BSTree::search(int x)
{
    Node* tmp = root;
    while (!empty(tmp) && tmp->getValue() != x)
    {
        if (tmp->getValue() > x)
        {
            tmp = tmp->getLeft();
        }
        else
        {
            tmp = tmp->getRight();
        }
    }
    return tmp;
}

Node* BSTree::minimum(Node* p)
{
    if (empty(p))
    {
        return nullptr;
    }
    Node* tmp = root;
    
    //minimum is a max-left value
    while (!empty(tmp->getLeft()))
    {
        tmp = tmp->getLeft();
    }
    return tmp;
}

Node* BSTree::maximum(Node* p)
{
    if (empty(p))
    {
        return nullptr;
    }
    Node* tmp = p;

    //maxiumum is a max-right value
    while (tmp->getRight())
    {
        tmp = tmp->getRight();
    }
    return tmp;
}

Node* BSTree::successor(Node* p)
{
    if (empty(p))
        return nullptr;

    Node* tmp = p;

    //Successor is on the right for sure
    tmp = tmp->getRight();

    //then we have to find minimum of right subtree (extreme left right subtree node)
    while (tmp->getLeft())
    {
        tmp = tmp->getLeft();
    }
    return tmp;
}

Node* BSTree::predecessor(Node* p)
{
    if (empty(p))
        return nullptr;

    Node* tmp = p;

    //Predecessor is on the left for sure
    tmp = tmp->getLeft();

    //then we have to find maximum of left subtree (extreme right left subtree node)
    while (tmp->getRight())
    {
        tmp = tmp->getRight();
    }
    return tmp;
}

bool BSTree::leaf(Node* p)
{
    //if Node is empty
    if (empty(p))
        return false;
    //if Node doesn't have sons
    if (p->getRight() == nullptr && p->getLeft() == nullptr)
        return true;
    return false;
}

void BSTree::del(Node* p)
{
    cout << "s";
}
