#include <iostream>
using namespace std;

struct List {
    int data;
    List* next;
};

/*
 Prints each node as: [data] | [address of next node]
For example: 
 42 | 0x55a3b2c1d4e0
  7 | 0x55a3b2c1d4f8
100 | 0x0
*/
void OutDynamicArray (List*& head) {
    cout << "\n";
    List* p = head;
    if (head == nullptr) {
        cout << "The list is empty! Nothing to display!\n";
        return;
    }
    while (p != nullptr) {
        if ((p->data) < 10) {
            cout << "  " << p->data << " | " << p->next << " " << "\n";
        } else if (((p->data) > 9) && ((p->data) < 100)) {
            cout << " " << p->data << " | " << p->next << " " << "\n";
        } else {
            cout << p->data << " | " << p->next << " " << "\n";
        }
        p = p->next;
    }
};