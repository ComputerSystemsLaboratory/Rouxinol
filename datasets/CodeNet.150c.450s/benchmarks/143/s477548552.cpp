#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < (n); i++)

using namespace std;

using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n, q;
  cin >> n;
  vector<ll> cnt(100010, 0);
  ll ans = 0;
  rep(i, n) {
    int a;
    cin >> a;
    cnt[a]++;
    ans += a;
  }
  cin >> q;
  rep(_, q) {
    int b, c;
    cin >> b >> c;
    ans -= b * cnt[b];
    ans += c * cnt[b];
    cout << ans << '\n';
    cnt[c] += cnt[b];
    cnt[b] = 0;
  }
  return 0;
}
