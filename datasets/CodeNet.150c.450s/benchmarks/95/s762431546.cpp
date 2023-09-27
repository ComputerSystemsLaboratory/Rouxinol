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
    int n;
    cin >> n;
    if (!n)
      break;
    int cnt = 0;
    bool luf = false, ruf = false, up = false;
    REP(i, n) {
      string f;
      cin >> f;
      if (f == "lu")
        luf = true;
      else if (f == "ru")
        ruf = true;
      else if (f == "ld")
        luf = false;
      else if (f == "rd")
        ruf = false;

      if (!up && luf && ruf) {
        cnt++;
        up = true;
      } else if (up && !luf && !ruf) {
        cnt++;
        up = false;
      }
    }

    cout << cnt << endl;
  }
  return 0;
}