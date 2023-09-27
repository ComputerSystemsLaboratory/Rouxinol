#include <stdio.h>
typedef long long ll;

int main(void) {
  ll i, n, ans = 100000;
  scanf("%lld", &n);
  for(i = 0; i < n; ++i) {
    ans = ans + ans / 20;
    if(ans % 1000) ans -= ans % 1000, ans += 1000;
  }
  printf("%lld\n", ans);
  return 0;
}
