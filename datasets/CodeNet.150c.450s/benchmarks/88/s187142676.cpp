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
    int h, w;
    cin >> h >> w;
    if (!h && !w)
      break;

    int answ = INF, ansh = INF;
    for (int hh = 150; hh >= 1; hh--) {
      for (int ww = 150; ww >= 1; ww--) {
        if (ww <= hh)
          continue;
        if (ww <= w && hh <= h)
          continue;
        // cout << "j:" << hh << " i:" << ww << endl;
        if (hh * hh + ww * ww > h * h + w * w) {
          //(ansh, answ)??¨(hh, ww)??§(hh, ww)?????????????°?????????£????????´??°
          if (ansh * ansh + answ * answ > hh * hh + ww * ww ||
              ansh * ansh + answ * answ == hh * hh + ww * ww && ansh > hh) {
            //cout << "a h:" << hh << " w:" << ww << endl;
            ansh = hh;
            answ = ww;
          }
        }
        if (hh * hh + ww * ww == h * h + w * w) {
          //cout << "b h:" << hh << " w:" << ww << endl;
          if (h < hh) {
            //cout << "h:" << hh << " w:" << ww << endl;
            ansh = hh;
            answ = ww;
          }
        }
      }
    }

    cout << ansh << " " << answ << endl;
  }
  return 0;
}