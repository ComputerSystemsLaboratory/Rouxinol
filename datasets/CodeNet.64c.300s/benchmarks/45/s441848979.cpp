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
    double n, p;
    int m;
    cin >> n >> m >> p;
    if(!n && !m && !p) break;
    double x[100], sum = 0;
    REP(i, n) {
      cin >> x[i];
      sum += x[i];
    }
    //cout << sum << endl;
    //cout << (sum * 100 * (1 - p / 100)) << " " << x[m - 1] << endl;

    if (x[m - 1] == 0)
      cout << 0 << endl;
    else {
      double temp = (sum * (100-p));
      int ans = temp/x[m-1];
      cout << ans << endl;
    }
    //cout << (int)((sum * 100 * (1 - p / 100)) / x[m - 1]) << endl;
  }
  return 0;
}