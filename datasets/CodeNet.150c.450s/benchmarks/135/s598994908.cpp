//author: Hayato Kawakita
// 2020/04/27 18:54
//vertict: 

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define repr(i, n) for (int i = (n); i >= 0; --i)
#define FOR(i, m, n) for (int i = (m); i < (n); ++i)
#define FORR(i, m, n) for (int i = (m); i >= (n); --i)
#define equals(a, b) (fabs((a) - (b)) < EPS)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const ll mod = 1000000007;
//const ll mod = 998244353;
const int inf = 1e9 + 10;
const ll INF = 1e18;
const ld EPS = 1e-10;
const int dx[8] = {1, 0, -1, 0, 1, -1, -1, 1};
const int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};
template<class T> bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T> bool chmin(T &a, const T &b) { if (a>b) { a=b; return 1; } return 0; }

int n, m;
int h[1505], w[1505];

void solve() {
  map<int, int> mh, mw;
  rep(i, n) {
    int res = 0;
    FOR(j, i, n) {
      res += h[j];
      mh[res]++;
    }
  }
  rep(i, m) {
    int res = 0;
    FOR(j, i, m) {
      res += w[j];
      mw[res]++;
    }
  }
  ll ans = 0;
  for (auto it = mh.begin(); it != mh.end(); it++) {
    ans += it->second * mw[it->first];
  }
  cout << ans << '\n';
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout << fixed << setprecision(25);

  while (1) {
    cin >> n >> m;
    if (n == 0 && m == 0) return 0;
    rep(i, n) cin >> h[i];
    rep(i, m) cin >> w[i];

    solve();
  }




  
  return 0;
}
