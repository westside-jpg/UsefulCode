#include <iostream>
using namespace std;

struct List {
    int data;
    List* next;
};

/* Before running the subroutine, you must create a variable head = nullptr */
List* CreateDynamicArray (List*& head) {
    cout << "\nEnter the number of elements for the new dynamic list: ";
    int n;
    cin >> n;
    List* p;
    srand(time(0));
    
    for (int i = 0; i < n; i++) {
        List* element = new List;
        element->data = rand() % 101;
        element->next = nullptr;

        if (head == nullptr) {
            head = element;
        } else {
            p = head;
            while (p->next != nullptr) {
                p = p->next;
            }
            p->next = element;
        }
    }
    cout << "\nList created successfully!\n";
    return head;
};