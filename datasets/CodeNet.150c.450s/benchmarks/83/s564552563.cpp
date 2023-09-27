#include <bits/stdc++.h>
using namespace std;

int Max(int &a,int b){return a=max(a,b);}

int dp[101][30010];
int main(){
  int n,W;
  cin>>n>>W;
  int v[101],w[101];
  for(int i=0;i<n;i++) cin>>v[i]>>w[i];
  
  
  for(int i=0;i<n;i++){
    for(int j=0;j<=W;j++){
      Max(dp[i+1][j],dp[i][j]);
      Max(dp[i+1][j+w[i]],dp[i][j]+v[i]);
    }
  }

  int ans = 0;
  for(int i=0;i<=W;i++) Max(ans,dp[n][i]);
  cout<<ans<<endl;

  return 0;
}