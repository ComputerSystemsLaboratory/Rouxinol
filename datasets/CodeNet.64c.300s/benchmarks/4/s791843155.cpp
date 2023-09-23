#include <stdio.h>

int n, m, p;

int main() {
  scanf("%d%d%d", &n, &m, &p);
  if ( n < m && m < p ) printf("Yes\n");
  else printf("No\n");
  return 0;
}