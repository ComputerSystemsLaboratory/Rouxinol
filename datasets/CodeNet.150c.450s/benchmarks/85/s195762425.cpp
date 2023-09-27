#line 1 "../lib/template.hpp"


#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n; i++)
#define FOR(i, m, n) for (int i = m; i < n; i++)
#define ALL(v) (v).begin(), (v).end()
#define coutd(n) cout << fixed << setprecision(n)
#define ll long long int
#define vl vector<ll>
#define vi vector<int>

using namespace std;

#line 2 "tmp.cpp"

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;
  vi a;
  REP(i, n) {
    int r, c;
    cin >> r >> c;
    if (i == 0)
      a.push_back(r);
    a.push_back(c);
  }

  vector<vi> dp(n + 1, vi(n + 1, 1e9));
  REP(k, n + 1) {
    REP(i, n + 1 - k) {
      if (k < 2) {
        dp[i][i + k] = 0;
      } else {
        REP(j, k) { dp[i][i + k] = min(dp[i][i + k], dp[i][i + j] + dp[i + j][i + k] + a[i] * a[i + j] * a[i + k]); }
      }
    }
  }

  cout << dp[0][n] << endl;

  return 0;
}

