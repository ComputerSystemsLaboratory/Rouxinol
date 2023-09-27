#include <bits/stdc++.h>
using namespace std;

#define int long long

const int INF = 1e15;

int dp[55555];
int c[22];

int n, m;

int rec(int money) {
  if (money == 0) {
    return dp[money] = 0;
  }

  if (dp[money] != INF) {
    return dp[money];
  }

  int ans = INF;
  for (int i = 0; i < m; i++) {
    if (money - c[i] < 0) continue;
    ans = min(ans, rec(money - c[i]) + 1);
  }

  return dp[money] = ans;
}

signed main() {
  cin >> n >> m;
  fill(dp, dp + n + 10, INF);
  for (int i = 0; i < m; i++) {
    cin >> c[i];
  }

  cout << rec(n) << endl;

  return 0;
}
