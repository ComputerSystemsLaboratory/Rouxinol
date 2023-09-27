#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
  int n, k;
  while (true) {
    cin >> n >> k;
    if (!n && !k) break;
    vector<int> a(n);
    for (int i{}; i < n; ++i) cin >> a[i];

    // 累積和
    vector<ll> s(n + 1, 0);
    for (int i{}; i < n; ++i) {
      s[i + 1] = s[i] + a[i];
    }

    ll ans{numeric_limits<ll>::min()};
    for (int i{}; i <= n - k; ++i) {
      ans = max(ans, s[i + k] - s[i]);
    }

    cout << ans << endl;
  }
  return 0;
}

