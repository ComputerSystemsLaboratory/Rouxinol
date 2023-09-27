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

PII a[35];
signed main(void)
{
  int w, n;
  cin >> w >> n;
  REP(i, n) {
    int x, y;
    cin >> x; cin.ignore(); cin >> y;
    a[i] = MP(x, y);
  }
  int ans[50];
  REP(i, w) {
    int now = i+1;
    REP(j, n) {
      if(now == a[j].first) now = a[j].second;
      else if(now == a[j].second) now = a[j].first;
    }
    ans[now] = i+1;
  }
  FOR(i, 1, w+1) cout << ans[i] << endl;
  return 0;
}