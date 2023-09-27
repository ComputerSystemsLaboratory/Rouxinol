#include <stdio.h>
#include <math.h>

int main(void) {
  int n, i;
  scanf("%d", &n);
  printf("%d:", n);
  for(i = 2; i <= sqrt(n); ) {
    if(!(n % i)) {
      n /= i;
      printf(" %d", i);
    } else ++i;
  }
  printf(" %d\n", n);
  return 0;
}
