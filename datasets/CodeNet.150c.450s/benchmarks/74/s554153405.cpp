#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m,coin;
  vector<int> dp(50001,50001);
  cin>>n>>m;
  for(int i=0;i<m;i++){
    cin>>coin;
    dp[coin]=1;
  }
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i;j++){
      if(dp[i+j] > dp[i]+dp[j])dp[i+j]=dp[i]+dp[j];
    }
  }
  cout<<dp[n]<<endl;
  return 0;
}