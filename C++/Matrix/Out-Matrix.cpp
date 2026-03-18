#include <iostream>
#include <iomanip>
using namespace std;

const int k = 3;
typedef double matrix[k][k];

/* Procedure to fill matrix
with random numbers */

void OutMatrix (matrix mat) {
    cout << "Матрица " << ":" << "\n";
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < k; j++) {
            cout << setw(6) << fixed << setprecision(1) << mat[i][j] ;
        }
        cout << "\n";
    }
    cout << "\n";
};