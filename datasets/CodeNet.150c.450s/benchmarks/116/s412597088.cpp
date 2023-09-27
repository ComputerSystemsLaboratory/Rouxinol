#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)n; ++i)
#define repi(i, a, b) for (int i = int(a); i < int(b); ++i)
#define repr(i, n) for (int i = (int)n - 1; i >= 0; --i)
#define ALL(a) (a).begin(), (a).end()
using ll = long long;
using Graph = vector<vector<int>>;
using P = pair<ll, ll>;
const int dx[] = {0, 1, -1, 0};
const int dy[] = {1, 0, 0, -1};
const ll mod = 1e9 + 7;
const ll INF = 1e9;
const ll LINF = 1LL << 60;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////
  while (1) {
    ll n, k;
    cin >> n >> k;
    if (n == 0 && k == 0) break;
    vector<ll> sum(n + 1, 0), a(n);
    rep(i, n) cin >> a[i];
    rep(i, n) sum[i + 1] = sum[i] + a[i];
    ll ans = -LINF;
    rep(i, n - k + 1) ans = max(ans, sum[i + k] - sum[i]);
    cout << ans << endl;
  }
  return 0;
}

