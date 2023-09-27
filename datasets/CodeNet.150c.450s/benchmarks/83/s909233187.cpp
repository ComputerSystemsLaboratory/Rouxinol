#include<iostream>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
using namespace std;

int main(){
  int n,W;
  cin>>n>>W;
  int dp[n][W+1];
  rep(i,n)rep(j,W+1)dp[i][j]=0;
  dp[0][0]=0;
  int w[n],v[n];
  rep(i,n){
    cin>>v[i]>>w[i];
  }
  rep(i,n){
    rep(j,W+1){
      if(i==0 && j==0)continue;
      if(i==0){
	if(j>=w[0])dp[i][j]=v[i];
	else dp[i][j]=0;
      }else if(j-w[i]<0)dp[i][j]=dp[i-1][j];
      else dp[i][j]=max(dp[i-1][j],dp[i-1][j-w[i]]+v[i]);
    }
  }
  cout<<dp[n-1][W]<<endl;
  return 0;
}