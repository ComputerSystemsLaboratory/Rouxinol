#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
const int INF = (1<<30)-1;
const long long LINF = (1LL<<62)-1;
const int dx[] = {-1, 0, 1, 0};
const int dy[] = {0, 1, 0, -1};
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n, m;
  while (cin >> n >> m && (n || m)) {
    vector<int> h(n), w(m);
    rep(i, n)
      cin >> h[i];
    rep(i, m)
      cin >> w[i];
    map<int, int> mph, mpw;
    rep(i, n) {
      int sum = 0;
      for (int j = i; j < n; j++) {
        sum += h[j];
        mph[sum]++;
      }
    }
    rep(i, m) {
      int sum = 0;
      for (int j = i; j < m; j++) {
        sum += w[j];
        mpw[sum]++;
      }
    }
    ll ans = 0;
    for (auto e : mph)
      ans += (ll)e.second*mpw[e.first];
    cout << ans << endl;
  }
  return 0;
}
