#include <stdio.h>

int n, m;

int main() {
  while (true) {
    scanf("%d%d", &n, &m);
    if (!n && !m) return 0;
    if ( n > m ) n ^= m ^= n ^= m;
    printf("%d %d\n", n, m);
  }
}