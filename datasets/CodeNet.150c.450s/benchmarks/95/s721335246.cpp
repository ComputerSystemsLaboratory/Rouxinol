#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  while (cin >> n, n) {
    auto c = vector<int>(2, 0);
    int ans = 0;
    for (int i = 0; i < n; ++i) {
      string f; cin >> f;
      c[f[0] == 'l'] ^= 1;
      if (all_of(begin(c), end(c), [](int x) { return x == 1; })) {
        ++ans;
        c = vector<int>(2, 0);
      }
    }
    cout << ans << endl;
  }
  return 0;
}

