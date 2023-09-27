#include<cstdio>
using namespace std;
typedef long long ll;

ll a, b, n, x, y, dp[20][20];

int main() {
  while (scanf("%lld%lld", &a, &b), a) {
    a--, b--;
    for (ll i = 0; i <= a; i++) for (ll j = 0; j <= b; j++) dp[i][j] = 0;
    dp[0][0] = 1;
    scanf("%lld", &n);
    for (ll i = 0; i < n; i++) scanf("%lld%lld", &x, &y), dp[x-1][y-1] = -1;
    for (ll i = 0; i <= a; i++) for (ll j = 0; j <= b; j++) {
      if (dp[i][j] == -1) {
        dp[i][j] = 0;
        continue;
      }
      if (i != 0) dp[i][j] += dp[i-1][j];
      if (j != 0) dp[i][j] += dp[i][j-1];
    }
    printf("%lld\n", dp[a][b]);
  }
}

