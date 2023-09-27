#include <bits/stdc++.h>
using namespace std;

int main() {
  while (true) {
    int n, k;
    cin >> n >> k;

    if (n == 0 && k == 0) {
      break;
    }

    vector<int> a(n + 1);
    for (int i = 1; i <= n; ++i) {
      cin >> a[i];
    }

    for (int i = 1; i <= n - 1; ++i) {
      a[i + 1] += a[i];
    }

    int ans = -1000000001;
    for (int i = 0; i < n - k; ++i) {
      ans = max(a[i + k] - a[i], ans);
    }

    cout << ans << endl;
  }
}

