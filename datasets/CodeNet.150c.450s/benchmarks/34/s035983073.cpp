#include <bits/stdc++.h>
using namespace std;

#define int long long

int dp[50];
int n;

void init() {
  dp[0] = 1;
  for (int i = 0; i <= 30; i++) {
    for (int j = 1; j <= 3; j++) {
      dp[i+j] += dp[i];
    }
  }
}

signed main() {
  init();
  while (1) {
    cin >> n;
    if (n == 0) break;
    int mult = 3650;
    cout << (dp[n] + mult - 1) / mult << endl;
  }

  return 0;
}
