#include <stdio.h>

int main(void)
{
  int i, j;

  for (i = 1; i < 10001; i++){
    scanf("%d",&j);
    if (j == 0)
      break;
    printf("Case %d: %d\n", i, j);
  }

  return 0;
}