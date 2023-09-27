#include <stdio.h>

int n;

int main() {
  scanf("%d", &n);
  printf("%d:%d:%d\n", n/60/60, (n/60)%60, n%60);
}