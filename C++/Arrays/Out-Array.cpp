#include <iostream>
#include <iomanip>
using namespace std;

int const n = 10;
typedef int arr[n];

/* Procedure to out an array */

void OutArray (arr a) {
    for (int i = 0; i < n; i++) {
        cout << setw(4) << a[i];
    }
};