#include <bits/stdc++.h>
using namespace std;

int N, W;
int v[100], w[100];
int dp[100][10001];

// maximize sum of value
int solve(int idx, int limit) {
  if (idx >= N)
    return 0;

  if (dp[idx][limit] != -1)
    return dp[idx][limit];

  int ret = solve(idx + 1, limit);
  if (w[idx] <= limit)
    ret = max(solve(idx + 1, limit - w[idx]) + v[idx], ret);

  return dp[idx][limit] = ret;
}

int main(void) {
  cin >> N >> W;
  for (int i = 0; i < N; i++)
    cin >> v[i] >> w[i];

  memset(dp, -1, sizeof(dp));

  cout << solve(0, W) << endl;
  return 0;
}