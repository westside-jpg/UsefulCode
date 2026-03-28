#include <iostream>
using namespace std;

struct List {
    int data;
    List* next;
};

void DeleteElementForDataDynamicArray (List*& head) {
    if (head != nullptr) {
        cout << "Enter the value of the element you want to delete: ";
        int value;
        cin >> value;
        List* current = head;
        List* p;

        if (current->data == value) {
            p = current;
            p = p->next;
            head = p;
            delete current;
            cout << "\nElement deleted successfully!\n";
            return;
        }

        while (current->data != value) {
            p = current;
            current = current->next;
            if ((current == nullptr) && (p->data != value)) {
                cout << "\nAn element with this value does not exist!\n";
                return;
            }
        }
        p->next = current->next;
        delete current;
        cout << "\nElement deleted successfully!\n";
        return;
    } else {
        cout << "\nThe list is empty! Cannot delete anything!\n";
        return;
    }
};