#include <bits/stdc++.h>

using namespace std;

typedef long long llint;

int main() {
  int n, a, b, c, x;
  while (cin >> n >> a >> b >> c >> x, n) {
    vector<int> y(n);
    for (int i = 0; i < n; i++) {
      cin >> y[i];
    }
    bool flag = true;
    int ans = 0;
    for (int i = 0; i < n; i++) {
      while (y[i] != x && ans < 10001) {
        ans++;
        x = (a * x + b) % c;
        // cout << x << endl;
      }
      if (i + 1 < n) ans++, x = (a * x + b) % c;
      // cout << ans << endl;
    }

    if (ans < 10001) {
      cout << ans << endl;
    } else {
      cout << -1 << endl;
    }
  }
  return 0;
}
