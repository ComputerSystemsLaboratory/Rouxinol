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

ll dp[31];
signed main(void)
{
  dp[1] = 1; dp[2] = 2; dp[3] = 4;
  FOR(i, 4, 31) {
    dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
  }

  int n;
  while(1) {
    cin >> n;
    if(!n) break;
    //cout << dp[n] << endl;
    cout << dp[n]/3650 + !!(dp[n]%3650) << endl;
  }

  return 0;
}