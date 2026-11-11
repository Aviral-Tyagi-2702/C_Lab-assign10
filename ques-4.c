#include <stdio.h>
#include <limits.h>

void secondLargest(int a[], int i, int n, int *l, int *sl)
{
  if (i == n) {
    return;
  }

  if (a[i] > *l) {
    *sl = *l;
    *l = a[i];
  } else if (a[i] > *sl && a[i] != *l) {
    *sl = a[i];
  }

  secondLargest(a, i + 1, n, l, sl);
}

int main() {
  int a[100], n, i, l, sl;

  printf("Enter the number of elements: ");
  scanf("%d", &n);

  if (n < 2) {
    printf("At least two elements are required.\n");
    return 1;
  }

  for (i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }

  l = INT_MIN;
  sl = INT_MIN;
  secondLargest(a, 0, n, &l, &sl);

  if (sl == INT_MIN) {
    printf("There is no second largest distinct element.\n");
  } else {
    printf("Second largest element: %d\n", sl);
  }

  return 0;
}