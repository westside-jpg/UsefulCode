#include <iostream>
using namespace std;

int const n = 10;
typedef int arr[n];

/* Procedure to copy array
in this case we copy array a to array b */

void CopyArray (arr a, arr b) {
    for (int i = 0; i < n; i++) {
        b[i] = a[i];
    }
}