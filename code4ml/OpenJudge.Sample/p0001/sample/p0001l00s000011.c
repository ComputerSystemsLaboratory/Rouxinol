#include <stdio.h>

int main(void)
{
  int a, b;
  int sum, k;

  while (scanf("%d%d", &a, &b) != -1) {
  sum = a + b;
  k = 0;
  do {
    sum /= 10;
    k = k + 1;
  } while (sum > 0);

  printf("%d\n", k);
  }

  return(0);
}