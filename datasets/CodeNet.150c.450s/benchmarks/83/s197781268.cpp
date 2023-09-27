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

int v[105], w[105], dp[10010];
signed main(void)
{
  int n, W;
  cin >> n >> W;
  REP(i, n) cin >> v[i] >> w[i];

  REP(i, n) for(int j=W; j>=w[i]; --j) {
    dp[j] = max(dp[j], dp[j-w[i]] + v[i]);
  }
  cout << dp[W] << endl;
  return 0;
}