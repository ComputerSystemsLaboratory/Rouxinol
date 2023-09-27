#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  int dp[21][50001]={0},y[21]={0},n,m,a;
  cin>>n>>m;
  for(int i=1;i<=m;i++){
    cin>>y[i];
  }
  for(int i=0;i<=n;i++)dp[0][i]=50050;
  for(int i=1;i<=m;i++){
    for(int j=1;j<=n;j++){
      if(j-y[i]>=0)dp[i][j]=min(dp[i-1][j],dp[i][j-y[i]]+1);
      else dp[i][j]=dp[i-1][j];
    }
  }
  
  /*for(int i=1;i<=m;i++){
    for(int j=1;j<=n;j++){
      cout<<dp[i][j]<<" ";	  
    }
    cout<<endl;
  }/////////////*/
  
  cout<<dp[m][n]<<endl;
  return 0;
}