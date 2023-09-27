#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<ll> VL;
typedef vector<VL> VVL;
typedef pair<int, int> PII;

#define FOR(i, a, n) for (int i = (int)a; i < (int)n; ++i)
#define REP(i, n) FOR(i, 0, n)
#define ALL(x) x.begin(), x.end()
#define MOD 1000000007
#define INF 1000000000
#define PI 3.14159265359
#define EPS 1e-12

int main(void) {
  while (true) {
    int m, nmin, nmax, p[210];
    cin >> m >> nmin >> nmax;
    if(!m && !nmin && !nmax) break;
    REP(i, m) cin >> p[i];

    int diff, maxdiff = -INF, ans = 0;
    ;
    FOR(i, nmin, nmax + 1) {
      diff = p[i - 1] - p[i];
      if (diff >= maxdiff) {
        maxdiff = diff;
        ans = i;
      }
    }

    cout << ans << endl;
  }
  return 0;
}