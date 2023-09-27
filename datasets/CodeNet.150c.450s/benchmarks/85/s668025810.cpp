#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,dp[111][111],p[111];

int rec(int i,int j){
  int Min=2*1e9;
  for(int k=0;k<i-1;k++){
    Min=min(Min,dp[j+1][j+k+1]+dp[j+k+2][j+i]+p[j]*p[j+k+1]*p[j+i]);
  }
  return Min;
}

signed main(){
  cin>>n;
  cin>>p[0]>>p[1];
  for(int i=2;i<=n;i++){
    cin>>p[i]>>p[i];
  }
  for(int i=0;i<n;i++){
    dp[i][i]=0;
    if(i)dp[i][i+1]=p[i-1]*p[i]*p[i+1];
  }

  for(int i=3;i<=n;i++){
    for(int j=0;j+i<=n;j++){
      dp[j+1][j+i]=rec(i,j);
    }
  }
  cout<<dp[1][n]<<endl;
  return 0;
}