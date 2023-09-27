#include <stdio.h>

int n, m;

int main() {
  scanf("%d%d", &n, &m);
  printf("a %s b\n", (n == m ? "==" : (n < m ? "<" : ">")));
  return 0;
}