#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

const ll mod = 1000000007;
int main() {
  ll m, n;
  cin >> m >> n;
  ll ans = 1;
  while (n > 0) {
    if (n & 1) ans = ans * m % mod;
    m = m * m % mod;
    n >>= 1;
  }
  cout << ans << endl;
  return 0;
}
