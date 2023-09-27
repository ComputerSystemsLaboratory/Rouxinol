#include <stdio.h>
#include <math.h>

int main(void) {
  long long n, i, m, mt, mt2;
  scanf("%lld%lld", &m, &n);
  mt = m, mt2 = m;
  m = 1;
  long long a = log2(n), b = n - (int)pow(2, a);
  while( a ) {
    for(i = 0; i < a; ++i) {
      mt *= mt;
      mt %= 1000000007;
    }
    a = log2(!b ? 1 : b);
    m *= mt;
    m %= 1000000007;
    if(a) b = b - (int)pow(2, a);
    else if(b){
      m *= mt2;
      m %= 1000000007;
    }
    mt = mt2;
  }
  printf("%lld\n", m);
  return 0;
}
