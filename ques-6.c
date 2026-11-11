/*Write a C program to find the maximum element in an array and count the number of times it occurs using recursion.*/

#include <stdio.h>

int findMaxAndCount(int arr[], int n, int *max, int *count) {
    if (n == 0) {
        return 0;
    }

    int currentMax = arr[n - 1];
    if (currentMax > *max) {
        *max = currentMax;
        *count = 1;
    } else if (currentMax == *max) {
        (*count)++;
    }

    return findMaxAndCount(arr, n - 1, max, count);
}

int main() {
    int arr[] = {1, 3, 7, 7, 2, 7, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0];
    int count = 0;

    findMaxAndCount(arr, n, &max, &count);

    printf("Maximum element is %d and it occurs %d times\n", max, count);
    return 0;
}