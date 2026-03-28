#include <iostream>
using namespace std;

struct List {
    int data;
    List* next;
};

void DeleteElementForNumberDynamicArray (List*& head) {
    if (head != nullptr) {
        List* current = head;
        List* p;
        cout << "Enter the number of the element you want to delete: ";
        int pos;
        cin >> pos;
        if (pos <= 0) {
            cout << "\nError! Position must be greater than 0!\n";
            return;
        }
        if (pos == 1) {
            p = current;
            p = p->next;
            head = p;
            delete current;
            cout << "\nElement deleted successfully!\n";
            return;
        }
        for (int i = 0; i < pos - 1; i++) {
            p = current;
            current = current->next;
            if (current == nullptr) {
                cout << "\nThis element does not exist!\n";
                return;
            }
        }
        p->next = current->next;
        delete current;
        cout << "\nElement deleted successfully!\n";
        return;
    } else {
        cout << "\nNothing to delete!\n";
        return;
    }
};