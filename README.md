


# Data Structures implemented in C++

A collection of Data Structures implemented in C++ and its presentation.

## Array-based list
![Array](https://media.geeksforgeeks.org/wp-content/cdn-uploads/gq/2015/05/Arrays.png)
## Linked list
![dll](https://media.geeksforgeeks.org/wp-content/cdn-uploads/gq/2014/03/DLL1.png)
A linked list is a linear data structure, in which the elements are not stored at contiguous memory locations. The elements in a linked list are linked using pointers.
# Stack
It is a linear data structure that follows a particular order in which the operations are performed.
**LIFO** (Last-in, First-out)
This strategy states that the element that is inserted last will come out first. You can take a pile of plates kept on top of each other as a real-life example. The plate which we put last is on the top and since we remove the plate that is at the top, we can say that the plate that was put last comes out first.
## Array-based stack
![Difference between Stack and Queue Data Structures - GeeksforGeeks](https://media.geeksforgeeks.org/wp-content/uploads/geek-stack-1.png)

## Stack based on a linked list
![Implement stack using singly linked list - Quescol](https://quescol.com/wp-content/uploads/2021/04/stack-implementation-using-linked-list.png)

# FIFO
Similar to Stack and Queue is a linear data structure that follows a particular order in which the operations are performed for storing data. The order is First In First Out **(FIFO)**. One can imagine a queue as a line of people waiting to receive something in sequential order which starts from the beginning of the line. It is an ordered list in which insertions are done at one end which is known as the rear and deletions are done from the other end known as the front. A good example of a queue is any queue of consumers for a resource where the consumer that came first is served first.  
The difference between stacks and queues is in removing. In a stack we remove the item the most recently added; in a queue, we remove the item the least recently added.
## Array-based FIFO queue
![Introduction and Array Implementation of Queue - GeeksforGeeks](https://media.geeksforgeeks.org/wp-content/uploads/20220816162225/Queue.png)
## FIFO queue based on a linked list
![Implementation of Deque using doubly linked list - GeeksforGeeks](https://media.geeksforgeeks.org/wp-content/uploads/deque_dll.jpg)
# Binary Search Tree
![Binary Search Tree - GeeksforGeeks](https://media.geeksforgeeks.org/wp-content/uploads/BSTSearch.png)

**Binary Search Tree**  is a node-based binary tree data structure which has the following properties:

-   The left subtree of a node contains only nodes with keys lesser than the node’s key.
-   The right subtree of a node contains only nodes with keys greater than the node’s key.
-   The left and right subtree each must also be a binary search tree.
# Heap-based priority queue
![Priority Queue using Binary Heap - GeeksforGeeks](https://media.geeksforgeeks.org/wp-content/uploads/20220723001728/D1drawio.png)

**Priority Queue** is an extension of the queue with the following properties:

1.  Every item has a priority associated with it.
2.  An element with high priority is dequeued before an element with low priority.
3.  If two elements have the same priority, they are served according to their order in the queue.

A  Binary Heap is a Binary Tree with the following properties:

1.  It is a Complete Tree. This property of Binary Heap makes them suitable to be stored in an array
2.  A Binary Heap is either  **Min Heap**  or  **Max Heap**.
3.  In a  **Min Binary Heap**, the key at the root must be minimum among all keys present in Binary Heap. The same property must be recursively true for all nodes in Binary Tree.
4.  Similarly, in a  **Max Binary Heap**, the key at the root must be maximum among all keys present in Binary Heap. The same property must be recursively true for all nodes in Binary Tree.

## Hash Table
![Hashing Data Structure - GeeksforGeeks](https://media.geeksforgeeks.org/wp-content/cdn-uploads/20221220111537/ComponentsofHashing.png)
A hash table is a data structure that maps keys to values. It is implemented as an array of linked lists, where each key is hashed to a specific index in the array, and the value is stored in the corresponding linked list at that index. Hash tables are used for fast lookups and insertion of elements in a collection.

## Resources
> https://www.geeksforgeeks.org
> https://quescol.com
