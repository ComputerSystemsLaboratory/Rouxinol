#include <bits/stdc++.h>
using namespace std;

#define int long long

int n;
int dp[55];

int rec(int stage) {
  // 終了条件
  if (stage == 0) {
    return dp[stage] = 1;
  }
  
  // 一度求めた値の場合、メモしたやつを返す
  if (dp[stage] != -1) {
    return dp[stage];
  }

  int ans = 0;

  for (int i = 1; i <= 3; i++) {
    if (stage - i < 0) continue;
    ans += rec(stage - i);
  }

  // 値を求めたらメモる
  return dp[stage] = ans;
}

signed main() {
  // 前処理
  fill(dp, dp+33, -1);
  rec(30);

  while (1) {
    cin >> n;
    if (n == 0) break;
    int ans = (dp[n] + 3650 - 1) / 3650;
    cout << ans << endl;
  }

  return 0;
}
