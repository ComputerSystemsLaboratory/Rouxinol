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
#define MP make_pair
#define PB push_back
#define MOD 1000000007
#define INF (1LL << 30)
#define LLINF (1LL << 60)
#define PI 3.14159265359
#define EPS 1e-12
//#define int ll

int dp1[1500010] = {0}, dp2[1500010] = {0};
signed main(void) {
  while (true) {
    VI a[1500], b[1500];
    int n, m, h[1510], w[1510];
    cin >> n >> m;
    if(!n && !m) break;
    REP(i, n) cin >> h[i];
    REP(i, m) cin >> w[i];

    memset(dp1, 0, sizeof(dp1));
    memset(dp2, 0, sizeof(dp2));
    a[0].PB(h[0]);
    dp1[h[0]]++;
    FOR(i, 1, n) {
      for (int j : a[i - 1]) {
        a[i].PB(j + h[i]);
        dp1[j + h[i]]++;
      }
      a[i].PB(h[i]);
      dp1[h[i]]++;
    }

    b[0].PB(w[0]);
    dp2[w[0]]++;
    FOR(i, 1, m) {
      for (int j : b[i - 1]) {
        b[i].PB(j + w[i]);
        dp2[j + w[i]]++;
      }
      b[i].PB(w[i]);
      dp2[w[i]]++;
    }

    ll ret = 0;
    REP(i, 1500001) ret += dp1[i] * dp2[i];
    cout << ret << endl;
  }

  return 0;
}