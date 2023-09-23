#include <stdio.h>

int i, n;
long long res;

int main(void)
{
  scanf("%d",&n);
  res = 1;
  for(i = 1; i <= n; i++)
    res = res * i;
  printf("%lld\n",res);
  return 0;
}