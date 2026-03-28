#include <iostream>
using namespace std;

struct List {
    int data;
    List* next;
};

void InsertAfterExactValue (List*& head) {
    if (head != nullptr) {
        cout << "\nEnter the value of the node after which to insert the element: ";
        int need_value;
        cin >> need_value;
        List* current = head;
        List* p;
        
        bool flag = true;
        while (flag) {
            p = current;
            current = current->next;
            if (current == nullptr && p->data != need_value) {
                cout << "\nError! An element with this value does not exist in the list!\n";
                return;
            }
            if (p->data == need_value) {
                flag = false;
            }
        }
        cout << "Enter the value to insert: ";
        int insert_value;
        cin >> insert_value;
        List* element = new List;
        element->data = insert_value;
        element->next = nullptr;
        if (p != nullptr) {
            element->next = current;
            p->next = element;
            cout << "\nElement added successfully!\n";
        }
        return;
    } else {
        cout << "\nThe list is empty! Cannot insert anything!\n";
        return;
    }
};