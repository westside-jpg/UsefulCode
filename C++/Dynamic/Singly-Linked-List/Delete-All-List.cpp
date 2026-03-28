#include <iostream>
using namespace std;

struct List {
    int data;
    List* next;
};

void DeleteAllDynamicArray (List*& head) {
    if (head != nullptr) {
        List* p = head;

        while (p != nullptr) {
            List* next = p->next;
            delete p;
            p = next;
        }

        head = nullptr;

        cout << "\nList deleted successfully!\n";

    } else {
        cout << "\nNothing to delete!\n";
        return;
    }
};