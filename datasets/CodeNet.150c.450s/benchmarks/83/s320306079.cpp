#include <iostream>

using namespace std;

int dp[101][10001];
int main()
{
  int N, W, i, j, ans = 0;
  cin >> N >> W;
  int v[N + 1], w[N + 1];

  for (i = 0; i < N; i++){
    cin >> v[i] >> w[i];
  }
  for (i = 0; i < N; i++){
    for (j = 0; j <= W; j++){
      dp[i + 1][j] = max(dp[i + 1][j], dp[i][j]);
    }
    for (j = 0; j <= W; j++){
      if (j + w[i] <= W){
        dp[i + 1][j + w[i]] = max(dp[i + 1][j + w[i]], dp[i][j] + v[i]);
      }
    }
  }
  for (i = 0; i <= W; i++){
    ans = max(ans, dp[N][i]);
  }
  cout << ans << endl;

  return (0);
}