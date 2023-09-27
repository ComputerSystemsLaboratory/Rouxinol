#include <bits/stdc++.h>
using namespace std;

#define rep(i, u) for (int i = 0; i < u; i++)

using ll = long long;
using ull = unsigned long long;

int main() {
  int n, m, l;
  ll a[100][100] = {}, b[100][100] = {};
  cin >> n >> m >> l;
  rep(i, n) rep(j, m) cin >> a[i][j];
  rep(i, m) rep(j, l) cin >> b[i][j];
  rep(i, n) {
    rep(j, l) {
      ll ans = 0;
      rep(k, m) ans += a[i][k] * b[k][j];
      cout << ans;
      if (j == l - 1) cout << endl;
      else cout << ' ';
    }
  } 
  return 0;
}

