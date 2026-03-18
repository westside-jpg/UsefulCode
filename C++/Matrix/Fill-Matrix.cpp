#include <iostream>
using namespace std;

const int k = 3;
typedef double matrix[k][k];

/* Procedure to fill matrix
with random numbers*/

void FillMatrix (matrix mat) {
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < k; j++) {
            mat[i][j] = rand() / (double)RAND_MAX * 100.0;
        }
    }
};