#include <stdio.h>

int X = 1;
int n;

int main() {
  while(true) {
    scanf("%d", &n);
    if (!n) return 0;
    printf("Case %d: %d\n", X++, n);
  }
  return 0;
}