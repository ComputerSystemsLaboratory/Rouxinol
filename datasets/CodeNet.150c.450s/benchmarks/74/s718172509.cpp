#include<bits/stdc++.h>
using namespace std;

int c[30];
int dp[50010];

signed main(){

  int n,m; cin >> n >> m;
  for(int i = 0; i < m; i++){
    cin >> c[i];
  }
  fill(dp,dp+50010,1 << 30);
  dp[0] = 0;
  for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
      if(j+c[i] > n) break;
      dp[j+c[i]] = min(dp[j+c[i]],dp[j]+1);
    }
  }
  cout << dp[n] << endl;

  return 0;
}

