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
#define MP make_pair
#define PB push_back
#define MOD 1000000007
#define INF (1LL<<30)
#define LLINF (1LL<<60)
#define PI 3.14159265359
#define EPS 1e-12
#define int ll

signed main(void)
{
  while(true) {
    int n;
    cin >> n;
    if(!n) break;
    int ret = INF;
    for(int i=0; i*i*i<=n; ++i) {
      for(int j=0; j*j<=n; ++j) {
        int tmp = n - i*i*i - j*j;
        if(tmp >= 0) {
          ret = min(ret, i+j+tmp);
        }
      }
    }
    cout << ret << endl;
  }
  return 0;
}