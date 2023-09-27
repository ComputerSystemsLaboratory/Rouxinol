#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  for (int i = 0; i < 5; i++) {
    int n, k;
    cin >> n >> k;

    // プログラム終了の合図
    if (n == 0 && k == 0) {
      return 0;
    }

    // 累積和
    vector<int> s(n + 1, 0);
    for (int i = 1; i <= n; i++) {
      int num;
      cin >> num;
      s.at(i) = s.at(i - 1) + num;
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
      int left = i;
      int right = i + k;

      if (right > n) {
        break;
      }

      int dif = s.at(right) - s.at(left);
      ans = max(ans, dif);
    }

    cout << ans << endl;
  }

  return 0;
}
