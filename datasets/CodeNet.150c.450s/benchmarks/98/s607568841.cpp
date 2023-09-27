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
#define MAX_N 100

int main(void) {
  while (true) {
    int n, m;
    cin >> n >> m;
    if (n == 0 && m == 0)
      break;
    int a[MAX_N], b[MAX_N], asum = 0, bsum = 0;
    REP(i, n) {
      cin >> a[i];
      asum += a[i];
    }
    REP(i, m) {
      cin >> b[i];
      bsum += b[i];
    }

    int minret = INF, reta = -1, retb = -1;
    REP(i, n) {
      REP(j, m) {
        int tempa = asum - a[i] + b[j], tempb = bsum - b[j] + a[i];
        if (tempa == tempb && minret > a[i] + b[j]) {
          reta = a[i];
          retb = b[j];
          minret = a[i] + b[j];
        }
      }
    }
    if (reta == -1)
      cout << -1 << endl;
    else
      cout << reta << " " << retb << endl;
  }

  return 0;
}