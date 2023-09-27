#include <iostream>
#include <string>

#define MAX_N 1000
#define MAX_M 1000

int n, m;
std::string s, t;

int dp[MAX_N+1][MAX_M+1];

void solve() {
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      if (s[i] == t[j]) {
        dp[i+1][j+1] = dp[i][j] + 1;
      }
      else {
        dp[i+1][j+1] = std::max(dp[i][j+1], dp[i+1][j]);
      }
    }
  }
}

int main() {
  int q;
  std::cin >> q;
  for (int i = 0; i < q; ++i) {
    std::cin >> s >> t;
    n = s.size();
    m = t.size();
    solve();
    std::cout << dp[n][m] << std::endl;
  }
}