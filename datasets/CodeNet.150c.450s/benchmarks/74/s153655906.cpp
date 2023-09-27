#include<iostream>
#include<vector>
#include<algorithm>
#define INF 1e9

using namespace std;
int main(){

  int n,m;
  cin >>n>>m;

  int dp[n+1];
  int coin[m];

  for(int i=0 ; i < m ; i++)cin >>coin[i];

  for(int i=0 ; i < n+1 ; i++)dp[i]=INF;
  dp[0]=0;
  
  for(int i=0 ; i < m ; i++){
    for(int j=coin[i] ; j <= n+1 ; j++){
      dp[j]=min(dp[j],dp[j-coin[i]]+1);
    }
  }
  
  cout <<dp[n]<<endl;
  
  return 0;
}