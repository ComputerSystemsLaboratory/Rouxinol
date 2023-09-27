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
#define int ll

int dp1[1000010], dp2[1000010];
signed main(void) {
  VL a, b;
  FOR(i, 1, 500) {
    int tmp = i * (i + 1) * (i + 2) / 6;
    if (tmp % 2)
      b.PB(tmp);
    a.PB(tmp);
  }
  //cout << a[100] << a[150] << " " << a[200] << endl;
  //cout << b.size() << endl;
  //a 200?????§???b 100?????§

  REP(i, 1000001) dp1[i] = dp2[i] = i;
  FOR(i, 1, 200) {
    FOR(j, a[i], 1000001) {
      dp1[j] = min(dp1[j], dp1[j-a[i]] + 1);
    }
  }
  FOR(i, 1, 100) {
    FOR(j, b[i], 1000001) {
      dp2[j] = min(dp2[j], dp2[j-b[i]] + 1);
    }
  }

  //REP(i, 50) cout << dp1[i] << " "; cout << endl;
  //REP(i, 50) cout << dp2[i] << " "; cout << endl;

  int n;
  while (true) {
    cin >> n;
    if(!n) break;
    cout << dp1[n] << " " << dp2[n] << endl;
  }

  return 0;
}