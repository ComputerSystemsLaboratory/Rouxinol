#include <stdio.h>
int main(void)
{
  long long n, min = 1000000, max = -1000000, sum = 0, i, k;
  scanf("%lld",&n);
  for (i = 0; i < n; i++){
    scanf("%lld",&k);
    sum = sum + k;
    if (k < min) {min = k;}
    if (k > max) {max = k;}
  }
  printf("%lld %lld %lld\n",min,max,sum);
  return 0;
}

