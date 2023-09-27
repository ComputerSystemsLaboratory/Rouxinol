#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int dp[101][101];

int main() {
  int n;
  cin >> n;
  vector<int> p(n + 1);
  rep(i, n) cin >> p[i] >> p[i + 1];

  for (int l = 2; l <= n; ++l) {
    for (int i = 1; i <= n - l + 1; ++i) {
      int j = i + l - 1;
      dp[i][j] = __INT_MAX__;
      for (int k = i; k <= j - 1; ++k) {
        dp[i][j] =
            min(dp[i][j], dp[i][k] + dp[k + 1][j] + p[i - 1] * p[k] * p[j]);
      }
    }
  }
  cout << dp[1][n] << endl;

  return 0;
}
