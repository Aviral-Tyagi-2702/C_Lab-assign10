#include<stdio.h>

long long Fact(int n) {
  if(n==0 || n==1) {
    return 1;
  } else {
    return n * Fact(n-1);
  }
}

int main() {
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  printf("Factorial of %d is %lld\n", n, Fact(n));
  return 0;
}