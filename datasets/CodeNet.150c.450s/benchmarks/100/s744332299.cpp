#include <stdio.h>
 
int main()
{
  int c, n;
  long long int fact = 1;
  scanf("%d", &n);
  for (c = 1; c <= n; c++)
    fact = fact * c;
 
  printf("%lld\n",fact);
 
  return 0;
}