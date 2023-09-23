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
  int n;
  cin >> n;
  REP(i, n) {
    int y, m, d;
    cin >> y >> m >> d;
    ll ans = 0;
    ans += (y-1)/3*590 + (y-1)%3*195;
    if(y%3==0) ans += (m-1)*20;
    else ans += (m-1)/2*39 + (m-1)%2*20;
    ans += d;

    cout << 196471-ans << endl;
  }
  return 0;
}