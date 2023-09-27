#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = 1e16;
const ll mod = 1000000007;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
  ll d; cin >> d;
  vector <ll> c(26);
  rep(i, 26) cin >> c.at(i);
  vector <vector <ll>> s(d, vector <ll> (26));
  rep(i, d) {
    rep(j, 26) {
      cin >> s.at(i).at(j);
    }
  }
  vector <ll> last(26, 0);
  ll res = 0;
  rep(i, d) {
    ll t; cin >> t;
    t--;
    res += s.at(i).at(t);
    last.at(t) = i+1;
    rep(j, 26) res -= c.at(j)*(i+1-last.at(j));
    cout << res << endl;
  }
}