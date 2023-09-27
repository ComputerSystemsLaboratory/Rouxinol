#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> ans(n + 1, 0);
  int res = 0;
  for (int x = 1; x * x <= n; x++) {
    for (int y = 1; y * y <= n; y++) {
      for (int z = 1; z * z <= n; z++) {
        int v = x * x + y * y + z * z + x * y + y * z + z * x;
        if (v > n) continue;
        ans[v]++;
      }
    }
  }
  for (int i = 1; i <= n; i++) {
    cout << ans[i] << endl;
  }

  return 0;
}