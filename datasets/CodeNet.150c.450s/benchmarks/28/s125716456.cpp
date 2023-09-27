#include <stdio.h>
#include <algorithm>
typedef long long ll;

int main(void) {
  ll i, j, k, n, a, h = 0, t;
  scanf("%lld%lld", &n, &k);
  ll sum[n + 1];
  sum[0] = 0;
  for(i = 1; i <= n; ++i) {
    scanf("%lld", &a);
    sum[i] = sum[i - 1] + a;
  }
  t = sum[n];
  while( 1 ) {
    ll *p = sum + 1, now = (t + h) / 2;
    for(i = 0; i < k; ++i) {
      p = std::upper_bound(p, sum + n + 1, now + *(p - 1));
      if(p == sum + n + 1) break;
    }
    if(p == sum + n + 1) t = now;
    else h = now;
    if(t - h == 1) break;
  }
  printf("%lld\n", t);
  return 0;
}
