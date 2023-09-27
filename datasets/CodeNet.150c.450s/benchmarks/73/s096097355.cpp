#include <stdio.h>
typedef long long ll;

int main(void) {
  ll i, j, k, n, q, c, x, y;
  scanf("%lld%lld", &n, &q);
  ll seg[n * 4], f = 1;
  while(f < n) f *= 2;
  for(i = 0; i < f * 2; ++i) seg[i] = 0;
  for(i = 0; i < q; ++i) {
    scanf("%lld%lld%lld", &c, &x, &y);
    x--;
    if(c) {
      y--;
      ll ans = 0;
      ll r = x + f;
      while(1) {
        ll las, ra = 1;
        while(!(r % 2)) r /= 2;
        while(ra <= r) ra *= 2;
        ra /= 2;
        las = f / ra * (r + 1 - ra) - 1;
        //printf("f%lld r%lld ra%lld\n", f, r, ra);
        while(las > y) {
          r *= 2;
          ra *= 2;
          las = f / ra * (r + 1 - ra) - 1;
          //printf("f%lld r%lld ra%lld\n", f, r, ra);
        }
        ans += seg[r];
        if(las == y) break;
        r++;
        //printf("f%lld r%lld ra%lld\n", f, r, ra);
      }
      printf("%lld\n", ans);
    } else {
      int now = (x + f) / 2;
      seg[x + f] += y;
      while(now) {
         seg[now] = seg[now * 2] + seg[now * 2 + 1];
         now /= 2;
      }
    }
  }
  return 0;
}
