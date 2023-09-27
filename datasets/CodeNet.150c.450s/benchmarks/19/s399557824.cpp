#include <stdio.h>

int main(void)
{
  int i, x, y, s;

  for (i = 1; i < 3001; i++){
    scanf("%d %d", &x, &y);
    if (!x && !y)
      break;
    if (x > y){
      s = x;
      x = y;
      y = s;
    }
    printf("%d %d\n", x, y);
  }

  return 0;
}