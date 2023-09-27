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
    int n, a[1010];
    cin >> n;
    if (!n)
      break;
    REP(i, n) cin >> a[i];
    sort(a, a + n);

    int mind = INF;
    FOR(i, 1, n) {
      int diff = a[i] - a[i - 1];
      mind = min(mind, diff);
    }

    cout << mind << endl;
  }
  return 0;
}