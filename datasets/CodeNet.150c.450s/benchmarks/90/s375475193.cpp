#include <stdio.h>
#include <string.h>

int i, n, max;
int m[101];

int main(void)
{
  memset(m,0,sizeof(m));
  while(scanf("%d",&n) == 1)
    m[n]++;

  max = 0;
  for(i = 1; i <= 100; i++)
     if (m[i] > max) max = m[i];

  for(i = 1; i <= 100; i++)
    if (m[i] == max) printf("%d\n",i);
  return 0;
}