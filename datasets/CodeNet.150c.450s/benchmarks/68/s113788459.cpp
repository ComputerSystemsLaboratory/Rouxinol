#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  while (cin >> n, n) {
    auto a = vector<int>(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    sort(begin(a), end(a));

    int ans = 1e7;
    for (int i = 1; i < n; ++i) {
      ans = min(ans, a[i] - a[i - 1]);
    }
    cout << ans << endl;
  }
  return 0;
}

