#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++) cin>>a[i];
  int dp[n][22];
  memset(dp,0,sizeof(dp));
  dp[1][a[0]]=1;
  for(int i=1;i<n-1;i++){
    for(int j=0;j<=20;j++){
      if(j+a[i]<=20) dp[i+1][j+a[i]]+=dp[i][j];
      if(j-a[i]>= 0) dp[i+1][j-a[i]]+=dp[i][j];
    }
  }
  cout<<dp[n-1][a[n-1]]<<endl;
  return 0;
}