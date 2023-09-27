#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  while (cin >> n, n) {
    vector<int> dp(n + 1, 1);
    dp[1] = 1;
    dp[2] = 2;
    for (int i = 3; i < n + 1; ++i) dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
    cout << (dp[n] + 3650 - 1) / 3650 << endl;
  }
  return 0;
}

