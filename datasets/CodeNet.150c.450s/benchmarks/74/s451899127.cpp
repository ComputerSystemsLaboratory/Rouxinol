#include <bits/stdc++.h>

using namespace std;
int n, m;
int c[21];
int dp[21][50001];
int main(){
  cin >> n >> m;
  for(int i = 0; i < 21; i++){
    dp[i][0] = 0;
  }
  for(int i = 0; i < 21; i++){
    for(int k = 1; k < 50001; k++){
      dp[i][k] = 20000;
    }
  }
  for(int i = 1; i <= m; i++){
    cin >> c[i];
  }
  for(int i = 1; i <= m; i++){
    for(int k = 1; k <= 50000; k++){
      if(k >= c[i])
	dp[i][k] = min(dp[i][k-c[i]]+1,dp[i-1][k]);
      else
	dp[i][k] = dp[i-1][k];
    }
  }

  cout << dp[m][n] << endl;
}