#include<iostream>
#include<algorithm>
using namespace std;
int dp[101][10001];
int main(){
  int n,W;
  int v[100],w[100];
  cin>>n>>W;
  for(int i=1;i<=n;i++){
    cin>>v[i]>>w[i];
  }
  
  for(int i=0;i<=W;i++){
    dp[0][i]=0;
  }
  for(int i=0;i<=n;i++){
    dp[i][0]=0;
  }
  
  for(int i=1;i<=n;i++){
    for(int j=1;j<=W;j++){
      if(j>=w[i]){
	dp[i][j]=max(dp[i-1][j],dp[i-1][j-w[i]]+v[i]);
      }else{
	dp[i][j]=dp[i-1][j];
      }
    }
  }
  cout<<dp[n][W]<<endl;
}