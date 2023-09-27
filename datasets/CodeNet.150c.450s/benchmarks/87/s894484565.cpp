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
#define INF (1LL << 25) // 33554432
#define PI 3.14159265359
#define EPS 1e-12
//#define int ll

signed main(void) {
  while (true) {
    int h, b[13][5];
    cin >> h;
    if (!h)
      break;
    REP(i, h) REP(j, 5) cin >> b[i][j];

    int ret = 0;
    REP(i, h) {
      REP(j, h) {
        int c = 1;
        FOR(k, 1, 5) {
          if (b[j][k] == b[j][k - 1] && b[j][k] != 0)
            c++;
          else {
            if (c >= 3) {
              ret += b[j][k - 1] * c;
              for (int l = k - 1; l >= k - c; --l)
                b[j][l] = -1;
            }
            c = 1;
          }
        }
        if (c >= 3) {
          ret += b[j][4] * c;
          for (int l = 4; l > 4 - c; --l)
            b[j][l] = -1;
        }
      }
      /*cout << "kesu:" << endl;
      REP(i, h) {
        REP(j, 5) {
          cout << b[i][j] << " ";
        }
        cout << endl;
      }*/
      REP(j, 5) {
        int c = 0;
        for (int k = h - 1; k >= 0; --k) {
          if (b[k][j] == -1) {
            c++;
          } else if (c) {
            int ii = 0;
            while (ii != c) {
              b[k + c - ii][j] = b[k][j];
              b[k][j] = 0;
              ++ii;
            }
          }
        }
        if (c) {
          REP(k, c) b[k][j] = 0;
        }
      }
      /*cout << "otosu:" << endl;
      REP(i, h) {
        REP(j, 5) {
          cout << b[i][j] << " ";
        }
        cout << endl;
      }*/
    }

    cout << ret << endl;
  }

  return 0;
}