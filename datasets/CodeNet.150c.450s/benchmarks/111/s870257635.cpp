#include <iostream>
#include <algorithm>
#include <climits>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

#define int long long
#define rep(i, n) for (signed i=0; i<signed(n); i++)
#define all(c) (c).begin(), (c).end()

#define MAX_N 110

signed N;
int seq[MAX_N];
int dp[MAX_N][21];

signed main() {
  cin >> N;
  rep(i, N) cin >> seq[i];

  dp[1][seq[0]] = 1;
  rep(i, N) {
    rep(k, 21) {
      int x = seq[i];
      if (k + x <= 20) dp[i+1][k + x] += dp[i][k];
      if (k - x >= 0)  dp[i+1][k - x] += dp[i][k];
    }
  }
  int ans = dp[N-2+1][seq[N-1]];
  cout << ans << '\n';
  return 0;
}