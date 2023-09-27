#include <stdio.h>

int main(void)
{
  int x, y, r;

  scanf("%d%d", &x, &y);

  r = x % y;

  while(r!=0) {
    x = y;
    y = r;
    r = x % y;
  }
  printf("%d\n", y);

  return 0;
}