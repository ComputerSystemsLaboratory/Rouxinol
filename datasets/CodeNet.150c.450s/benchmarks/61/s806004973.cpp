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

int main(void)
{
  while(true) {
      int n, a, b, c, x;
      cin >> n >> a >> b >> c >> x;
      if(!n) break;
      int y[105];
      REP(i, n) cin >> y[i];

      int ans = -1, idx = 0;
      if(x == y[idx]) {
        idx++;
        if(idx == n) {
          cout << 0 << endl;
          continue;
        }
      }

      FOR(i, 1, 10001) {
          int temp = (a*x+b) % c;
          if(temp == y[idx]) {
            idx++;
            if(idx == n) {
              ans = i;
              break;
            }
          }
          x = temp;
          //cout << "temp:" << temp << endl;
      }
      cout << ans << endl;
  }
  return 0;
}