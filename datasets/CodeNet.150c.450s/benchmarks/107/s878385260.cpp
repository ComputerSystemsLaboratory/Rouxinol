#pragma region Macros
#include <bits/stdc++.h>

#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)
#define ALL(a) (a).begin(), (a).end()
#define SZ(x) ((int)(x).size())
#define IN(x, a, b) x >= a and x < b

using namespace std;
using ll = long long;

template <class T> bool chmax(T &a, const T &b) {
  if (a < b) {
    a = b;
    return 1;
  }
  return 0;
}
template <class T> bool chmin(T &a, const T &b) {
  if (b < a) {
    a = b;
    return 1;
  }
  return 0;
}
template <typename T> constexpr T INF = numeric_limits<T>::max() / 2;
#pragma endregion

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  string s, t;
  cin >> s >> t;
  int n = s.size();
  int m = t.size();
  vector<vector<int>> dp(n + 1, vector<int>(m + 1, INF<int>));
  REP(i, n + 1) { dp[i][0] = i; }
  REP(j, m + 1) { dp[0][j] = j; }
  REP(i, n) {
    REP(j, m) {
      if (s[i] == t[j]) {
        chmin(dp[i + 1][j + 1], dp[i][j]);
      }
      chmin(dp[i + 1][j + 1], dp[i][j + 1] + 1);
      chmin(dp[i + 1][j + 1], dp[i + 1][j] + 1);
      chmin(dp[i + 1][j + 1], dp[i][j] + 1);
    }
  }

  cout << dp[n][m] << endl;

  return 0;
}
