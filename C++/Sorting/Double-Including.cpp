#include <iostream>
using namespace std;

int const n = 10;
typedef int arr[n];

void DoubleIncluding (arr a, int &b, int &c) {
    for (int i = 1; i < n; i++) {
        int l = 0;
        int r = i - 1;
        int m = 0;
        while (l <= r) {
            m = (l + r) / 2;
            if (a[m] >= a[i]) {
                r = m - 1;
            } else {
                l = m + 1;
            }
            b++;
        }
        int res = 0;
        res = a[i];
        int j = 0;
        j = i - 1;
        while (j >= l) {
            a[j + 1] = a[j];
            j--;
            c++;
        }
        a[l] = res;
    }
};