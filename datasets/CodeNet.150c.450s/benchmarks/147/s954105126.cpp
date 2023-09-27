#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0, i##_len = (n); i < i##_len; ++i)
#define rep2(i, x, n) for(ll i = x, i##_len = (n); i < i##_len; ++i)
#define all(n) begin(n), end(n)
using ll = long long;
using P = pair<ll, ll>;
using vi = vector<int>;
using vl = vector<ll>;
using vs = vector<string>;
using vc = vector<char>;
using vb = vector<bool>;
using vd = vector<double>;
vi dir = {-1, 0, 1, 0, -1, -1, 1, 1, -1};

int main() {
  ll n;
  cin >> n;
  vl ans(n + 1, 0);
  rep2(x, 1, 101) rep2(y, 1, 101) rep2(z, 1, 101) {
    ll now = x * x + y * y + z * z + x * y + y * z + z * x;
    if(now <= n) ans[now]++;
  }
  rep2(i, 1, n + 1) cout << ans[i] << '\n';
}