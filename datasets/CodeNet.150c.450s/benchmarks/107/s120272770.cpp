#include<bits/stdc++.h>
using namespace std;
int dp[1010][1010];
int main(){
  for(int i=0;i<1010;i++)
    for(int j=0;j<1010;j++)
      dp[i][j]=1e9;
  string s1,s2;
  cin>>s1>>s2;
  int n=s1.size();
  int m=s2.size();
  for(int i=0;i<=n;i++)dp[i][0]=i;
  for(int i=0;i<=m;i++)dp[0][i]=i;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
      dp[i][j]=min(dp[i][j],dp[i-1][j-1]+(s1[i-1]!=s2[j-1]));
      dp[i][j]=min(dp[i][j],dp[i-1][j]+1);
      dp[i][j]=min(dp[i][j],dp[i][j-1]+1);
    }
  }
  int ans=1e9;
  for(int i=0;i<=m;i++)ans=min(ans,dp[n][i]+abs(m-i));
  cout<<dp[n][m]<<endl;
  return 0;
}

