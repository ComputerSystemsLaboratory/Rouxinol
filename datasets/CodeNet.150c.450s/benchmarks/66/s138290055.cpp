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
  int n, m;
  string u[300], t;
  cin >> n;
  REP(i, n) cin >> u[i];
  cin >> m;
  bool key = true;
  REP(i, m) {
    cin >> t;
    bool f = false;
    REP(j, n) {
      if(t == u[j]) f = true;
    }
    if(f) {
      if(key) {
        cout << "Opened by " << t << endl;
        key = false;
      } else {
        cout << "Closed by " << t << endl;
        key = true;
      }
    }
    else {
      cout << "Unknown " << t << endl;
    }
  }

  return 0;
}