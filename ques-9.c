/*Write a C program to find the column having the minimum sum in a matrix using recursion.*/

#include <stdio.h>

int findMinColumnSum(int matrix[][10], int n, int m, int col, int *minCol, int *minSum) {
    if (col >= m) {
        return 0;
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += matrix[i][col];
    }

    if (col == 0 || sum < *minSum) {
        *minSum = sum;
        *minCol = col;
    }

    return findMinColumnSum(matrix, n, m, col + 1, minCol, minSum);
}

int main() {
    int matrix[10][10] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int n = 3, m = 3;
    int minCol = 0;
    int minSum = matrix[0][0];

    findMinColumnSum(matrix, n, m, 0, &minCol, &minSum);

    printf("Column with minimum sum is %d and the sum is %d\n", minCol, minSum);
    return 0;
}