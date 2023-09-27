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

int a[100010], dp[100010];
signed main(void)
{
  int n;
  cin >> n;
  REP(i, n) cin >> a[i];
  fill(dp, dp+n, INF);
  REP(i, n) *lower_bound(dp, dp+n, a[i]) = a[i];
  cout << lower_bound(dp, dp+n, INF) - dp << endl;
  return 0;
}