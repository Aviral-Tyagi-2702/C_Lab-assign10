/*Write a C program to check whether a square matrix is symmetric using recursion*/

#include <stdio.h>

int isSymmetric(int matrix[][10], int n, int row, int col) {
    if (row >= n) {
        return 1;
    }
    if (col >= n) {
        return isSymmetric(matrix, n, row + 1, 0);
    }
    if (matrix[row][col] != matrix[col][row]) {
        return 0;
    }
    return isSymmetric(matrix, n, row, col + 1);
}

int main() {
    int matrix[10][10] = {{1, 2, 3}, {2, 4, 5}, {3, 5, 6}};
    int n = 3;
    if (isSymmetric(matrix, n, 0, 0)) {
        printf("Matrix is symmetric\n");
    } else {
        printf("Matrix is not symmetric\n");
    }
    return 0;
}