#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<ll> VL;
typedef vector<VL> VVL;
typedef pair<int, int> PII;

#define FOR(i, a, n) for (ll i = (ll)a; i < (ll)n; ++i)
#define REP(i, n) FOR(i, 0, n)
#define ALL(x) x.begin(), x.end()
#define MOD 1000000007
#define INF (1LL<<30)
#define LLINF (1LL<<60)
#define PI 3.14159265359
#define EPS 1e-12
//#define int ll

int dp[1010][1010];
signed main(void)
{
  string s, t;
  cin >> t >> s;
  const int n = s.size(), m = t.size();
  REP(i, n+1) REP(j, m+1) {
    if(i == 0) dp[i][j] = j;
    else if(j == 0) dp[i][j] = i;
    else {
      if(s[i-1] == t[j-1]) {
        dp[i][j] = min({dp[i-1][j-1], dp[i-1][j]+1, dp[i][j-1]+1});
      } else {
        dp[i][j] = min({dp[i-1][j] + 1, dp[i][j-1] + 1, dp[i-1][j-1]+1});
      }
    }
  }
  /*
  cout << "    ";
  REP(i, m) cout << t[i] << " ";
  cout << endl;
  REP(i, n+1) {
    if(i) cout << s[i-1] << " ";
    else cout << "  ";
    REP(j, m+1) {
      cout << dp[i][j] << " ";
    }
    cout << endl;
  }
  */
  cout << dp[n][m] << endl;
  return 0;
}