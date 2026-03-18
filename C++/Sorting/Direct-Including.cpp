#include <iostream>
using namespace std;

int const n = 10;
typedef int arr[n];

void DirectIncluding (arr a, int &b, int &c) {
    for (int m = 1; m < n; m++) {
        int indexx = m;
        int element = a[m];
        for (int i = m - 1; i >= 0; i--) {
            if (element < a[i]) {
                indexx = i;
            }
            b++;
        }
        if (indexx != m) {
            for (int p = m; p > indexx; p--) {
                a[p] = a[p - 1];
                c++;
            }
            a[indexx] = element;
            c++;
        }
    }
};