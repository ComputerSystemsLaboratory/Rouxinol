#include <bits/stdc++.h>
using namespace std;

#define int long long

int dp[50];
int n;

void init() {
  dp[1] = dp[2] = dp[3] = 1;
  for (int i = 1; i <= 30; i++) {
    dp[i+1] += dp[i];
    dp[i+2] += dp[i];
    dp[i+3] += dp[i];
  }
}

signed main() {
  init();
  while (1) {
    cin >> n;
    if (n == 0) break;
    int day = (dp[n] + 3650 - 1) / 3650;
    cout << day << endl;
  }

  return 0;
}
