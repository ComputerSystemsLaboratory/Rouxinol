#include <iostream>
using namespace std;
int dp[21][50010], c[21];

const int INF = 1e9;

int main(void) {
  int n, m;
  cin >> n >> m;
  for (int i = 0; i < m; i++) cin >> c[i];

  for (int i = 0; i < m; i++) {
    for (int j = 1; j <= n+1; j++) {
      if (!i) dp[i][j] = dp[i][j - c[i]] + 1;
      else {
        if (j - c[i] >= 0) dp[i][j] = min(dp[i-1][j], dp[i][j - c[i]] + 1);
        else dp[i][j] = dp[i-1][j];
      }
      //cout << "dp[" << i << "][" << j << "] = " << dp[i][j] << endl;
    }
  }

  cout << dp[m-1][n] << endl;
  return 0;
}