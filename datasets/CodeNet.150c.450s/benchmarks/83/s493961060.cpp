#include<iostream>
using namespace std;

int main(void){
  int n,mw;
  cin>>n>>mw;
  int w[100],v[100];
  int dp[100][10000];
  for(int i = 0 ; i < n ; i ++)
    cin>>v[i]>>w[i]; // v,w
  for(int j = w[0] ; j < mw + 1 ; j ++)
    dp[0][j] = v[0];
  for(int i = 1 ; i < n ; i ++){
    for(int j = 0 ; j < w[i] ; j ++)
      dp[i][j] = dp[i-1][j];
    for(int j = w[i] ; j < mw + 1 ; j ++)
      dp[i][j] = max(dp[i-1][j] , dp[i-1][j-w[i]] + v[i]);    
  }
  int res = -1;
  for(int i = 0 ; i < mw+1 ; i ++)
    res = max(res,dp[n-1][i]);
  /*
  for(int i = 0 ; i < n  ; i ++){
    for(int j = 0 ; j < mw + 1; j ++)
      cout<<dp[i][j]<<" ";
    cout<<endl;
  }
  //*/
  cout<<res<<endl;
}