#include<bits/stdc++.h>

using namespace std;

const int INF = 1 << 30;

int main()
{
  string S, T;
  cin >> S >> T;

  int dp[1001][1001];
  fill_n(*dp, 1001 * 1001, INF);
  for(int i = 0; i < 1001; i++) dp[i][0] = dp[0][i] = i;

  for(int i = 1; i <= S.size(); i++) {
    for(int j = 1; j <= T.size(); j++) {
      dp[i][j] = min(dp[i][j], dp[i - 1][j] + 1);
      dp[i][j] = min(dp[i][j], dp[i][j - 1] + 1);
      dp[i][j] = min(dp[i][j], dp[i - 1][j - 1] + (S[i - 1] != T[j - 1]));
    }
  }

  cout << dp[S.size()][T.size()] << endl;
}