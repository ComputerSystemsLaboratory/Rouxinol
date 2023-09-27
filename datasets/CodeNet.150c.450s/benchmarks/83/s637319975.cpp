#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,m;
  int v[100];
  int w[10000];
  int dp[100+10][10000+10]={};
  int maxi;

  cin >> n >> m;

  for(int i=0;i < n;i++) cin >> v[i] >> w[i];

  for(int i=n-1;i >= 0;i--){
    for(int j=0;j <= m;j++){
      if(j < w[i])
	{
	  dp[i][j] = dp[i+1][j];
	}
      else
	{
	  dp[i][j] = max(dp[i+1][j],dp[i+1][j-w[i]] + v[i]);
	}
    }
  }
  cout << dp[0][m] << endl;
  return 0;
}
  
  

