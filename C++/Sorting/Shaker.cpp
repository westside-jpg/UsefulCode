#include <iostream>
using namespace std;

int const n = 10;
typedef int arr[n];

void Shaker (arr a, int &b, int &c) {
    double keep = 0;
    for (int i = 0; i < (n / 2); i++) {
        for (int j = i; j < (n - i - 1); j++) {
            if (a[j] > a[j + 1]) {
                keep = a[j + 1];
                a[j + 1] = a[j];
                a[j] = keep;
                c++;
            }
        b++;
        }
        for (int k = (n - i - 1); k > i; k--) {
            if (a[k - 1] > a[k]) {
                keep = a[k];
                a[k] = a[k - 1];
                a[k - 1] = keep;
                c++;
            }
        b++;
        }
    }
};