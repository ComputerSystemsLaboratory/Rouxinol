#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m;
  cin>>n>>m;
  int w[1001],v[10001];
  int dp[n+1][m+1];
  for(int i=0;i<=n;i++){
    for(int j=0;j<=m;j++)dp[i][j]=0;
  }
  for(int i = 1;i <= n;i++) cin>> v[i] >> w[i];
  for(int i = 1;i <= n;i++){
    for(int j = 1; j <= m;j++){
      if(j < w[i]) dp[i][j] = dp[i-1][j];
      else dp[i][j] = max(dp[i-1][j],dp[i-1][j-w[i]]+v[i]);
    }
  }
  cout << dp[n][m] << endl;
}
 