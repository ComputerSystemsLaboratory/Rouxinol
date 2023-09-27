#include <bits/stdc++.h>
using namespace std;

#define int long long

const int INF = 1e15;

int dp[55555];
int c[22];

int n, m;

signed main() {
  cin >> n >> m;
  for (int i = 0; i <= m; i++) {
    cin >> c[i];
  }

  fill(dp, dp+n+5, INF);
  dp[0] = 0;
  for (int i = 0; i <= n; i++) {
    for (int j = 0; j < m; j++) {
      if (i - c[j] >= 0) {
        dp[i] = min(dp[i], dp[i-c[j]] + 1);
      }
    }
  }

  cout << dp[n] << endl;

  return 0;
}
