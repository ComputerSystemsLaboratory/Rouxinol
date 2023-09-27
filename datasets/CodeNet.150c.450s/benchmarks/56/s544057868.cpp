#include <stdio.h>
#define max(a,b) a>b?a:b
#define min(a,b) a>b?b:a


int main(void){
  long long n, i, a, s = 0, M = -1000000, m = 1000000;
  scanf("%lld",&n);
  for(i = 0;i < n;i++){
    scanf("%lld",&a);
    s += a;
    M = max(M,a);
    m = min(m,a);
  }
  printf("%lld %lld %lld\n",m,M,s);
  return 0;
}