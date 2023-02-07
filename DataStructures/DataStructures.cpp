#include <iostream>
#include <cstdlib>

#include "ArrayList.h"
#include "LinkedList.h"
#include "ArrayStack.h"
#include "LinkedStack.h"
#include "ArrayFifo.h"
#include "LinkedFifo.h"
#include "BSTree.h"
#include "heap.h"
#include "HashTable.h"

int main()
{
    int choice;

    do 
    {
        system("CLS");
        cout << "All data structures implementation" << endl;
        cout << "----------------------------------" << endl;
        cout << "1 - List based on array\n";
        cout << "2 - Linked list\n";
        cout << "3 - Array Stack\n";
        cout << "4 - Linked List Stack\n";
        cout << "5 - Array FIFO Queue\n";
        cout << "6 - Linked List FIFO Queue\n";
        cout << "7 - Binary Search Tree\n";
        cout << "8 - Priority queue based on heap\n";
        cout << "9 - Hash Table\n";
        cout << "----------------------------------" << endl;
        cout << "0 - Exit" << endl;
        cout << "Selection: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            system("CLS");
            ArrayList* a = new ArrayList(6);
            cout << "List: ";
            a->print();
            cout << endl << "empty(): " << a->empty();
            cout << endl << "getCapacity(): " << a->getCapacity();
            cout << endl << "locate(5): " << a->locate(5);
            cout << endl << "append(1)";
            a->append(1);
            cout << endl << "append(3)";
            a->append(3);
            cout << endl << "append(2)";
            a->append(2);
            cout << endl << "append(5)";
            a->append(5);
            cout << endl << "List: ";
            a->print();
            cout << endl << "empty(): " << a->empty();
            cout << endl << "getSize(): " << a->getSize();
            cout << endl << "locate(1): " << a->locate(1);
            cout << endl << "getFirst(): " << a->getFirst();
            cout << endl << "getLast(): " << a->getLast();
            cout << endl << "getNext(3): " << a->getNext(3);
            cout << endl << "getPrev(3): " << a->getPrev(3);
            cout << endl << "retrieve(2): " << a->retrieve(2);
            cout << endl << "List: ";
            a->print();
            cout << endl << "deleteAllX(2): ";
            a->deleteX(2);
            cout << endl << "List: ";
            a->print();
            cout << endl << "preppend(9)";
            a->preppend(9);
            cout << endl << "preppend(3)";
            a->preppend(3);
            cout << endl << "insert(4,11)";
            a->insert(4, 11);
            cout << endl << "List: ";
            a->print();
            cout << endl << "full(): " << a->full();
            cout << endl << "locate(11): " << a->locate(11);
            cout << endl << "del(1)";
            a->del(1);
            cout << endl << "List: ";
            a->print();
            cout << endl;
            delete a;
            system("pause");
            break;
        }
        case 2:
        {
            system("CLS");
            LinkedList* l = new LinkedList();
            cout << "List: " << l;
            cout << endl << "empty(): " << l->empty();
            cout << endl << "append(1)";
            l->append(1);
            cout << endl << "append(3)";
            l->append(3);
            cout << endl << "append(2)";
            l->append(2);
            cout << endl << "append(5)";
            l->append(5);
            cout << endl << "List: " << l;
            cout << endl << "empty(): " << l->empty();
            cout << endl << "getSize(): " << l->getSize();
            cout << endl << "preppend(9)";
            l->preppend(9);
            cout << endl << "preppend(3)";
            l->preppend(3);
            cout << endl << "List: " << l;
            cout << endl << "del(first element)";
            l->del(l->getFirst());
            cout << endl << "List: " << l;
            cout << endl << "retrive(5): " << l->retrive(l->getNext(l->getFirst()));
            cout << endl << "List: " << l;
            cout << endl << "clear()";
            l->clear();
            cout << endl << "List: " << l;
            cout << endl;
            delete l;
            system("pause");
            break;
        }
        case 3:
        {
            system("CLS");
            ArrayStack* s = new ArrayStack(5);
            cout << "Stack: ";
            s->printStack();
            cout << endl << "empty(): " << s->empty();
            cout << endl << "push(1)";
            s->push(1);
            cout << endl << "push(3)";
            s->push(3);
            cout << endl << "push(2)";
            s->push(2);
            cout << endl << "push(5)";
            s->push(5);
            cout << endl << "push(9)";
            s->push(9);
            cout << endl << "Stack: ";
            s->printStack();
            cout << endl << "empty(): " << s->empty();
            cout << endl << "full(): " << s->full();
            cout << endl << "push(11): ";
            s->push(11);
            s->printStack();
            cout << endl << "peek(): " << s->peek();
            cout << endl << "pop()";
            s->pop();
            cout << endl << "pop()";
            s->pop();
            cout << endl << "Stack: ";
            s->printStack();
            cout << endl << "clear(): ";
            s->clear();
            cout << endl << "Stack: ";
            s->printStack();
            cout << endl;
            delete s;
            system("pause");
            break;
        }
        case 4:
        {
            system("CLS");
            LinkedStack* s = new LinkedStack();
            cout << "Stack: " << s;
            cout << endl << "empty(): " << s->empty();
            cout << endl << "push(1)";
            s->push(1);
            cout << endl << "push(3)";
            s->push(3);
            cout << endl << "push(2)";
            s->push(2);
            cout << endl << "push(5)";
            s->push(5);
            cout << endl << "push(9)";
            s->push(9);
            cout << endl << "Stack: " << s;
            cout << endl << "empty(): " << s->empty();
            cout << endl << "peek(): " << s->peek();
            cout << endl << "pop()";
            s->pop();
            cout << endl << "pop()";
            s->pop();
            cout << endl << "Stack: " << s;
            cout << endl << "clear(): ";
            s->clear();
            cout << endl << "Stack: " << s;
            cout << endl;
            delete s;
            system("pause");
            break;
        }
        case 5:
        {
            system("CLS");
            ArrayFifo* f = new ArrayFifo(5);
            cout << "Queue: ";
            f->printQueue();
            cout << endl << "empty(): " << f->empty();
            cout << endl << "enqueue(1)";
            f->enqueue(1);
            cout << endl << "enqueue(3)";
            f->enqueue(3);
            cout << endl << "enqueue(2)";
            f->enqueue(2);
            cout << endl << "enqueue(5)";
            f->enqueue(5);
            cout << endl << "enqueue(9)";
            f->enqueue(9);
            cout << endl << "Queue: ";
            f->printQueue();
            cout << endl << "empty(): " << f->empty();
            cout << endl << "full(): " << f->full();
            cout << endl << "peek(): " << f->peek();
            cout << endl << "dequeue()";
            f->dequeue();
            cout << endl << "dequeue()";
            f->dequeue();
            cout << endl << "Queue: ";
            f->printQueue();
            cout << endl << "clear(): ";
            f->clear();
            cout << endl << "Queue: ";
            f->printQueue();
            cout << endl;
            delete f;
            system("pause");
            break;
        }
        case 6:
        {
            system("CLS");
            LinkedFifo* f = new LinkedFifo();
            cout << "Queue: " << f;
            cout << endl << "empty(): " << f->empty();
            cout << endl << "enqueue(1)";
            f->enqueue(1);
            cout << endl << "enqueue(3)";
            f->enqueue(3);
            cout << endl << "enqueue(2)";
            f->enqueue(2);
            cout << endl << "enqueue(5)";
            f->enqueue(5);
            cout << endl << "enqueue(9)";
            f->enqueue(9);
            cout << endl << "Queue: " << f;
            cout << endl << "empty(): " << f->empty();
            cout << endl << "peek(): " << f->peek();
            cout << endl << "dequeue()";
            f->dequeue();
            cout << endl << "dequeue()";
            f->dequeue();
            cout << endl << "Queue: " << f;
            cout << endl << "clear(): ";
            f->clear();
            cout << endl << "Queue: " << f;
            cout << endl;
            delete f;
            system("pause");
            break;
        }
        case 7:
        {
            system("CLS");
            BSTree* t = new BSTree();
            t->insert(15);
            t->insert(2);
            t->insert(1);
            t->insert(5);
            t->insert(17);
            t->insert(18);
            t->insert(3);
            t->insert(7);
            t->insert(45);
            t->insert(14);
            t->insert(19);
            t->insert(50);
            t->insert(9);
            cout << "Inorder: ";
            t->inorder(t->getRoot());
            cout << endl;
            cout << "Preorder: ";
            t->preorder(t->getRoot());
            cout << endl;
            cout << "Postorder: ";
            t->postorder(t->getRoot());
            cout << endl;
            cout << "Minimum: " << t->minimum(t->getRoot())->getValue() << endl;
            cout << "Maximum: " << t->maximum(t->getRoot())->getValue() << endl;
            cout << "Search(7): " << t->search(7)->getValue() << endl;
            cout << "Successor(15): " << t->successor(t->getRoot())->getValue() << endl;
            cout << "Predecessor(15): " << t->predecessor(t->getRoot())->getValue() << endl;
            cout << "Size: " << t->size(t->getRoot()) << endl;
            cout << "Height: " << t->height(t->getRoot()) << endl;
            delete t;
            system("pause");
            break;
        }
        case 8:
        {
            system("CLS");
            MinHeap h = MinHeap();
            cout << "Heap: ";
            h.printHeap();
            cout << endl;
            cout << endl << "empty(): 0 - " << h.empty();
            cout << endl << "full(): 0 - " << h.full();
            cout << endl << "getParent(5): 0 - " << h.getParent(5);
            cout << endl << "getLeft(5): 0 - " << h.getLeft(5);
            cout << endl << "getRight(5): 0 - " << h.getRight(5);
            cout << endl << "getSize(): 11 - " << h.getSize();
            cout << endl << "getValue(2): 10 - " << h.getValue(2);
            h.bottomUp(8);
            cout << endl << "Bottom-up: ";
            h.printHeap();
            cout << endl << "Insert(21)";
            h.insert(21);
            h.bottomUp(h.getSize() - 1);
            cout << endl<< "Heap: ";
            h.printHeap();
            cout << endl << "Minimum(): 21 - " << h.minimum();
            cout << endl << "DeleteMin()";
            h.deleteMin();
            cout << endl << "Heap: ";
            h.printHeap();
            cout << endl << "Minimum(): 12 - " << h.minimum();
            cout << endl << "Del(2)";
            h.del(2);
            cout << endl << "Heap: ";
            h.printHeap();
            cout << endl;
            system("pause");
            break;
        }
        case 9:
        {
            system("CLS");
            HashTable* h = new HashTable(50);
            std::string names[] = { "julia", "zuzanna", "zofia", "lena", "maja", "hanna", "amelia", "alicja", "maria" , "aleksandra", "oliwia", "natalia", "wiktoria", "emilia", "antonina", "laura", "pola", "iga", "anna", "liliana", "antoni", "jakub", "jan", "szymon", "franciszek", "filip", "aleksander", "mikolaj", "wojciech", "kacper", "adam", "michal", "marcel", "stanislaw", "wiktor", "piotr", "igor", "leon", "nikodem", "mateusz" };
            for (int i = 0; i < sizeof(names) / sizeof(std::string); i++)
                h->insert(names[i]);

            h->print();
            std::cout << std::endl;
            std::cout << "search: " << std::endl;
            h->search("julia");
            h->search("iga");
            h->search("lena");
            delete h;
            system("pause");
            break;
        }
        default:
            break;
        }
    } while (choice != 0);

    return 0;
}
