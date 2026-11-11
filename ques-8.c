/*Write a C program to multiply two compatible matrices using recursive functions.*/

#include <stdio.h>

void multiplyMatrices(int a[][10], int b[][10], int result[][10], int row, int col, int n, int m, int p) {
    if (row >= n) {
        return;
    }
    if (col >= p) {
        multiplyMatrices(a, b, result, row + 1, 0, n, m, p);
        return;
    }
    for (int k = 0; k < m; k++) {
        result[row][col] += a[row][k] * b[k][col];
    }
    multiplyMatrices(a, b, result, row, col + 1, n, m, p);
}

int main() {
    int a[10][10] = {{1, 2}, {3, 4}};
    int b[10][10] = {{5, 6}, {7, 8}};
    int result[10][10] = {{0}};
    int n = 2, m = 2, p = 2;

    multiplyMatrices(a, b, result, 0, 0, n, m, p);

    printf("Resultant matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}