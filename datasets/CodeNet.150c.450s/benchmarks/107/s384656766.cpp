#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n; i++)
#define FOR(i, m, n) for (int i = m; i < n; i++)
#define ALL(v) (v).begin(), (v).end()
#define coutd(n) cout << fixed << setprecision(n)
#define ll long long int
#define vl vector<ll>
#define vi vector<int>
const int INF = 2147483647;
const ll MOD = 1000000007;

using namespace std;

int dp[1001][1001] = {};
int main() {
  string s, t;
  cin >> s >> t;
  int n = s.length() + 1;
  int m = t.length() + 1;
  REP(i, n) { dp[i][0] = i; }
  REP(j, m) { dp[0][j] = j; }
  FOR(i, 1, n) {
    FOR(j, 1, m) {
      dp[i][j] = min(dp[i - 1][j] + 1, dp[i][j - 1] + 1);
      if (s[i - 1] == t[j - 1]) {
        dp[i][j] = min(dp[i][j], dp[i - 1][j - 1]);
      } else {
        dp[i][j] = min(dp[i][j], dp[i - 1][j - 1] + 1);
      }
    }
  }
  cout << dp[n - 1][m - 1] << endl;
}

