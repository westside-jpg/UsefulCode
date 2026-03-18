#include <iostream>
using namespace std;

int const n = 10;
typedef int arr[n];

void Bubble (arr a, int &b, int &c) {
    double keep = 0;
    for (int i = 0; i < (n - 1); i++) {
        for (int j = 0; j < (n - i - 1); j++) {
            if (a[j] > a[j + 1]) {
                keep = a[j + 1];
                a[j + 1] = a[j];
                a[j] = keep;
                c++;
            }
        b++;
        }
    }
};