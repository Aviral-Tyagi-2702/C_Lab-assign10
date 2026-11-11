
#include <stdio.h>

void rev(int a[], int n , int l, int r) 
{
    int *temp;
    if(l>=r) {
      return;
    }
    *temp = a[l];
    a[l] = a[r];
    a[r] = *temp;
    rev(a, n, l+1 , r-1);
}

int main() {
  int n, i;
  printf("Enter the number of elements: ");
  scanf("%d", &n);
  int a[n];
  printf("Enter the elements: ");
  for(i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  rev(a, n, 0, n-1);
  printf("Reversed array: ");
  for(i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");
  return 0;
}