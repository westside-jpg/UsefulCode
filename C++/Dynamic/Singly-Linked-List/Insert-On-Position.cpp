#include <iostream>
using namespace std;

struct List {
    int data;
    List* next;
};

void InsertInDynamicArray (List*& head) {
    cout << "\nEnter the position number to insert the element at: ";
    int pos;
    cin >> pos;
    if (pos <= 0) {
    cout << "\nError! Position must be greater than 0!\n";
    return;
    }
    List* current = head;
    List* p;

    for (int i = 0; i < pos - 1; i++) {
        if (current == nullptr) {
            cout << "\nError! This position does not exist in the list!\n";
            return;
        }
        p = current;
        current = current->next;
    }

    cout << "Enter the value to insert: ";
    int value;
    cin >> value;
    List* element = new List;
    element->data = value;
    element->next = nullptr;

    if (pos == 1) {
        element->next = head;
        head = element;
        cout << "\nElement added successfully!\n";
        return;
    }

    if (p != nullptr) {
        element->next = current;
        p->next = element;
        cout << "\nElement added successfully!\n";
        return;
    }
};