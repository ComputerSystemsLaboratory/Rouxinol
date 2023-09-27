#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
using namespace std;
signed main() {
  ios::sync_with_stdio(false); cin.tie(0);
  int n, m;
  while (cin >> n) {
    cin >> m;
    if (n == 0 && m == 0) return 0;
    vector<int> h(n), w(m);
    for (int i = 0; i < n; i++) {
      cin >> h[i];
    }
    for (int i = 0; i < m; i++) {
      cin >> w[i];
    }
    vector<int> cnt_h(2020200), cnt_w(2020200);
    for (int i = 0; i < n; i++) {
      int sum = 0;
      for (int j = i; j < n; j++) {
        sum += h[j];
        cnt_h[sum]++;
      }
    }
    for (int i = 0; i < m; i++) {
      int sum = 0;
      for (int j = i; j < m; j++) {
        sum += w[j];
        cnt_w[sum]++;
      }
    }
    long long ans = 0;
    for (int i = 0; i < 2020200; i++) {
      ans += cnt_h[i] * cnt_w[i];
    }
    cout << ans << '\n';
  }
  return 0;
}

