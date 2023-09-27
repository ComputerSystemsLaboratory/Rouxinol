#include <algorithm>
#include <iostream>
#include <vector>

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

void chmax(int &a, int b) {
  if (a < b) a = b;
}

int main() {

  int q;
  cin >> q;
  while (q--) {
    string s, t;
    cin >> s >> t;
    int n = s.size(), m = t.size();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
    rep(i, n) rep(j, m) {
      chmax(dp[i + 1][j + 1], dp[i + 1][j]);
      chmax(dp[i + 1][j + 1], dp[i][j + 1]);
      if (s[i] == t[j]) { chmax(dp[i + 1][j + 1], dp[i][j] + 1); }
    }
    cout << dp[n][m] << endl;
  }

  return 0;
}

