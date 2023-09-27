#include <stdio.h>

int main()
{
  int a = 0, b = 0, n, tmpa, tmpb;

  while (1) {
  scanf("%d", &n);
  if(n == 0)
    break;
  a = 0; b = 0;
  for(int i = 0; i < n; i++) {
    scanf("%d%d", &tmpa, &tmpb);
    if(tmpa == tmpb) {
      a += tmpa; b += tmpb;
    } else if(tmpa > tmpb) {
      a += (tmpa + tmpb);
    } else {
      b += (tmpa + tmpb);
    }
  }
  printf("%d %d\n", a, b);
  }

  return 0;
}