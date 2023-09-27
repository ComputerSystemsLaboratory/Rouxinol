#include <stdio.h>

int main()
{
  int x, y, i=1, j, ans = 0;

  scanf("%d %d", &x, &y);

  while (ans == 0) {
    if (x % i == 0) {
      j = x / i;
      if (x % j == 0 && y % j == 0) ans = j;
    }
    i++;
  }
  printf("%d\n", ans);
}

