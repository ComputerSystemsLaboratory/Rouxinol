#include <stdio.h>

int nextInt() { int d; scanf("%d", &d); return d; }

int gcd(int a, int b) {
  int r = a % b;
  if (r == 0) {
    return b;
  }
  return gcd(b, r);
}

int main() {
  int x = nextInt();
  int y = nextInt();

  printf("%d\n", gcd(x, y));
  return 0;
}