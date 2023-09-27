#include <bits/stdc++.h>
using namespace std;

int main()
{
  string X, Y;
  cin >> X >> Y;
  int n = X.size(), m = Y.size();
  vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
  for (int i = 1; i <= n; i++)
  {
    dp[i][0] = i;
  }
  for (int j = 1; j <= m; j++)
  {
    dp[0][j] = j;
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      dp[i + 1][j + 1] = min(min(dp[i + 1][j], dp[i][j + 1]), dp[i][j]) + 1;
      if (X[i] == Y[j])
      {
        dp[i + 1][j + 1] = min(dp[i + 1][j + 1], dp[i][j]);
      }
    }
  }
  cout << dp[n][m] << endl;
}
