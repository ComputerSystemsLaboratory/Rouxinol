#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m;cin>>n>>m;
  vector<int>c(m);
  for(int i=0;i<m;i++)
    cin>>c[i];
  int dp[n+10010];
  for(int i=0;i<n+10001;i++)
    dp[i]=1000000000;
  for(int i=0;i<m;i++)
    dp[c[i]]=1;

  for(int i=1;i<n;i++){
    for(int j=0;j<m;j++){
      dp[i+c[j]]=min(dp[i+c[j]],dp[i]+1);
    }
  }
  cout<<dp[n]<<endl;
  return 0;
}