#include <stdio.h>

long long unsigned int factorial(int n)
{
  return n>1 ? n*factorial(n-1) : 1;
}

int main(void)
{
  int n;
  scanf("%d", &n);

  printf("%llu\n", factorial(n));

  return 0;
}