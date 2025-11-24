#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

#define N 500 // matrix size

int main() {
    static int A[N][N], B[N][N], C[N][N];
    int i, j, k;

    // Fill matrices with random values
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++) {
            A[i][j] = rand() % 10;
            B[i][j] = rand() % 10;
        }

    double start = omp_get_wtime();

    // PARALLEL MATRIX MULTIPLICATION
    #pragma omp parallel for private(i,j,k)
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            for (k = 0; k < N; k++)
                C[i][j] += A[i][k] * B[k][j];

    double end = omp_get_wtime();

    printf("Time taken: %f seconds\n", end - start);
    return 0;
}

