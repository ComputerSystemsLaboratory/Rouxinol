#include <cstdio>
int main()
{
  int x, n, y;
  scanf("%d", &n);
  for (x = 3; x <= n; x++)
  {
    y = x;
    if (x % 3 == 0)
    {
      printf(" %d", x);
    }
    else if (x % 10 == 3)
    {
      printf(" %d", x);
    }
    else
    {
      while (1)
      {
        y /= 10;
        if (y % 10 == 3)
        {
          printf(" %d", x);
          break;
        }
        if (y / 10 == 0)
        {
          break;
        }
      }
    }
  }
  printf("\n");
}

