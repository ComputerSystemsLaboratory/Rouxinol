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
  int INF = 1e9 + 1;
  vi a(n), dp(n, INF);
  REP(i, n) { cin >> a[i]; }

  REP(i, n) {
    auto itr = lower_bound(ALL(dp), a[i]);
    *itr = a[i];
  }

  REP(i, n) {
    if (dp[i] == INF) {
      cout << i << endl;
      return 0;
    }
  }
  cout << n << endl;

  return 0;
}

