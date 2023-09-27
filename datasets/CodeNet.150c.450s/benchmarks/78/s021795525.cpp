#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
using namespace std;
constexpr int MAX = 1000001;
signed main() {
  ios::sync_with_stdio(false); cin.tie(0);
  vector<int> nums;
  for (int i = 1; i * (i + 1) * (i + 2) / 6 < MAX; i++) {
    nums.push_back(i * (i + 1) * (i + 2) / 6);
  }
  vector<int> dp_all(MAX, 1 << 30), dp_odd(MAX, 1 << 30);
  dp_all[0] = 0;
  dp_odd[0] = 0;
  for (int x : nums) {
    for (int i = 1; i < MAX; i++) {
      if (i - x >= 0) {
        dp_all[i] = min(dp_all[i], dp_all[i - x] + 1);
        if (x % 2) dp_odd[i] = min(dp_odd[i], dp_odd[i - x] + 1);
      }
    }
  }
  int n;
  while (cin >> n) {
    if (n == 0) return 0;
    cout << dp_all[n] << " " << dp_odd[n] << '\n';
  }
  return 0;
}

