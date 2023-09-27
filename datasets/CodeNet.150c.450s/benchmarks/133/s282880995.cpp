// 2020-06-28 21:12:24
#include<bits/stdc++.h>
#ifdef LOCAL
#include "lib/debug.hpp"
#else
#define debug(...) 1
#endif
#define ALL(a) (a).begin(), (a).end()
#define rep(i, n) REP(i, 0, (n))
#define repc(i, n) REPC(i, 0, (n))
#define REP(i, n, m) for (int i = (int)(n); i < (int)(m); i++)
#define REPC(i, n, m) for (int i = (int)(n); i <= (int)(m); i++)
#define REPCM(i, n, m) for (int i = (int)(n); i >= (int)(m); i--)
using namespace std;
using ll = long long;
using ld = long double;
using pr = pair<ll, ll>;
using vll = vector<ll>;
using vpr = vector<pr>;
template<class T> inline bool chmin(T& a, const T& b) { if (a > b) { a = b; return true; } else return false; }
template<class T> inline bool chmax(T& a, const T& b) { if (a < b) { a = b; return true; } else return false; }

const ll C = 26;
ll D;
vector<ll> cs(C), ts;
void answer() {
  cin >> D;
  rep(i, C) cin >> cs[i];
  vector<vector<ll> > ss(D, vector<ll>(C, 0));
  rep(i, D) rep(j, C) cin >> ss[i][j];
  ts.assign(D, 0);
  rep(i, D) cin >> ts[i], ts[i]--;
  map<ll, ll> last;
  rep(i, C) last[i] = 0;
  ll ans = 0;
  rep(i, D) {
    ll d = i + 1;
    ans += ss[i][ts[i]];
    last[ts[i]] = d;
    rep(j, C) ans -= cs[j] * (d - last[j]);
    cout << ans << '\n';
  }
}
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(0);
  answer();
  return 0;
}