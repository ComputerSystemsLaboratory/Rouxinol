#include <bits/stdc++.h>

using namespace std;

typedef long long llint;
typedef pair<llint, llint> P;

int main() {
  llint n, m;
  while (cin >> n >> m, n) {
    vector<P> v;
    for (int i = 0; i < n; i++) {
      llint d, p;
      cin >> d >> p;
      v.emplace_back(p, d);
    }
    sort(v.rbegin(), v.rend());
    for (int i = 0; i < n; i++) {
      if (v[i].second <= m) {
        m -= v[i].second;
        v[i].second = 0;
      } else {
        v[i].second -= m;
        m = 0;
      }
      if (m == 0) break;
    }

    llint ans = 0;
    for (auto &w : v) {
      ans += w.first * w.second;
    }
    cout << ans << endl;
  }

  return 0;
}
