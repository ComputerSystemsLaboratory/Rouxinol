#include <iostream>
using namespace std;

int v[1000], w[1000], dp[105][10010];

int main(void) {
  int N, W;
  cin.tie(0);
  ios::sync_with_stdio(false);

  cin >> N >> W;
  for (int i = 0; i < N; i++) cin >> v[i] >> w[i];

  for (int i = 0; i < N; i++) {
    for (int j = 1; j <= W; j++) {
      if (j - w[i] >= 0) {
        if (!i) {
          dp[i][j] = v[i];
        } else {
          dp[i][j] = max(dp[i-1][j], dp[i-1][j - w[i]] + v[i]);
        }
      } else {
        if (i) dp[i][j] = dp[i-1][j];
      }
      // cout << "dp[" << i << "][" << j << "] = " << dp[i][j] << endl;

    }
  }

  cout << dp[N-1][W] << endl;
  return 0;
}