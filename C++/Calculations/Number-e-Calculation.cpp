#include <iostream>
using namespace std;

double Factorial (double a) {
    if (a <= 1) return 1;
    return a * Factorial(a - 1);
};

/* Variable n here for approximation */
double e_calculation (double n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += 1 / Factorial(i);
    }
    return sum;
};