#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, ss, ee) for (int i = ss; i < ee; ++i)

void solve() {
  ll N, ans = 0;
  vector<ll> v(1e5 + 1, 0);
  cin >> N;
  ll x;
  rep(i, 0, N) {
    cin >> x;
    v[x]++;
    ans += x;
  }
  ll Q, a, b;
  cin >> Q;
  rep(i, 0, Q) {
    cin >> a >> b;
    ans -= a * v[a];
    ans += b * v[a];
    cout << ans << endl;
    v[b] += v[a];
    v[a] = 0;
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  solve();
}