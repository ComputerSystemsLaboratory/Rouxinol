#include <cstdio>
int main() {
  int a, b;
  scanf("%d%d",&a,&b);
  if (a < b) puts("a < b");
  else if (a > b) puts("a > b");
  else puts("a == b");
}
