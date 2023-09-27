#include<bits/stdc++.h>
using namespace std;
#define INF (int)1e9
int main(){
  int n,m,c[20];
  cin>>n>>m;
  for(int i=0;i<m;i++)cin>>c[i];
  int dp[21][50001];
  for(int i=0;i<21;i++)for(int j=0;j<50001;j++)dp[i][j]=INF;
  for(int i=0;i<m;i++){
    for(int j=0;j<=n;j++){
      if(j>c[i])
	dp[i+1][j]=min(dp[i+1][j-c[i]]+1,dp[i+1][j]);
      dp[i+1][j]=min(dp[i][j],dp[i+1][j]);
      if(j==c[i])dp[i+1][j]=1;
    }
  }
  int ans=INF;
  for(int i=0;i<21;i++)ans=min(ans,dp[i][n]);
  cout<<ans<<endl;
  return 0;
}

