#include <bits/stdc++.h>
using namespace std;

#define int long long

int n;

int rec(int stage) {
  // 終了条件
  if (stage == 0) {
    return 1;
  }

  int ans = 0;

  for (int i = 1; i <= 3; i++) {
    if (stage - i < 0) continue;
    ans += rec(stage - i);
  }

  return ans;
}

signed main() {
  while (1) {
    cin >> n;
    if (n == 0) break;
    int ans = (rec(n) + 3650 - 1) / 3650;
    cout << ans << endl;
  }

  return 0;
}
