#include <stdio.h>

int main(void) {
  int a, b, c, i, ans = 0;
  scanf("%d%d%d", &a, &b, &c);
  for(i = a; i <= b; ++i) if(!(c % i)) ++ans;
  printf("%d\n", ans);
  return 0;
}
