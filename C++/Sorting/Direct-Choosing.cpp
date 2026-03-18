#include <iostream>
using namespace std;

int const n = 10;
typedef int arr[n];

void DirectChoosing (arr a, int &b, int &c) {
    for (int m = 0; m < n; m++) {
        int min_index = m;
        int min = a[m];
        for (int i = m; i < n; i++) {
            if (a[i] < min) {
                min = a[i];
                min_index = i;
            }
            b++;
        }
        a[min_index] = a[m];
        c++;
        a[m] = min;
    }
};