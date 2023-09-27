#include<cstdio>
#include<algorithm>
using namespace std;
typedef long long ll;

ll n, k, a[100000];

int main() {
  while (1) {
    scanf("%lld%lld", &n, &k);
    if (n == 0) break;
    for (ll i = 0; i < n; i++) scanf("%lld", &a[i]);
    ll sum = 0;
    for (ll i = 0; i < k; i++) sum += a[i];
    ll ans = sum;
    for (ll i = k; i < n; i++) {
      sum += a[i];
      sum -= a[i - k];
      ans = max(ans, sum);
    }
    printf("%lld\n", ans);
  }
}

