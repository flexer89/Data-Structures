#pragma once

int main()
{
    int choice;

    do {
        system("CLS");
        cout << "Main Menu\n";
        cout << "Please make your selection\n";
        cout << "1 - List based on array\n";
        cout << "2 - Linked list\n";
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
            cout << endl << "deleteAllX(3): ";
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
            system("CLS");
            LinkedList* l = new LinkedList();
            cout << "List: " << l;
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
            cout << endl << "deleteAllX(3): ";
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
        default:
            break;
        }
    } while (choice != 0);

    return 0;
}
