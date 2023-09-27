#include <bits/stdc++.h>
using namespace std;

int main(void){

  int n, m; cin >> n >> m;
  vector<int> c(m);
  for(int i = 0; i < m; i++) cin >> c[i];

  int dp[22][50010];

  for(int i = 0; i <= n; i++) dp[0][i] = i;

  for(int i = 1; i < m; i++){
    for(int j = 0; j <= n; j++){
      if(j - c[i] >= 0){ 
	dp[i][j] = min(dp[i][j-c[i]] + 1, dp[i-1][j]);
      }else{
	dp[i][j] = dp[i-1][j];
      }
    }
  }

  cout << dp[m-1][n] << endl;
  return 0;
}