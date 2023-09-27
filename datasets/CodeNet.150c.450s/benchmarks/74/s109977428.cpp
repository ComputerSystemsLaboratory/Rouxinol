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

int d[20], dp[50010];
signed main(void)
{
  int n, m;
  cin >> n >> m;
  REP(i, m) cin >> d[i];
  REP(j, n+5) dp[j] = INF;
  dp[0] = 0;
  REP(i, m) FOR(j, d[i], n+1) {
    if(j >= d[i]) dp[j] = min(dp[j], dp[j-d[i]]+1);
  }
  cout << dp[n] << endl;
  return 0;
}