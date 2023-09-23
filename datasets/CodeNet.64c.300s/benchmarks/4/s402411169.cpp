#include <cstdio>
int main() {
  int a, b, c; scanf("%d%d%d", &a, &b, &c);
  if (a < b && b < c) puts("Yes");
  else puts("No");
}
