#include <iostream>
using namespace std;

int const n = 10;
typedef int arr[n];

/* Procedure to fill an array with 
random numbers */

void FillArray (arr a) {
    for (int i = 0; i < n; i++) {
        a[i] = 100 - rand() % 200;
    }
};