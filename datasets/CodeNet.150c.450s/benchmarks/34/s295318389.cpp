#include<bits/stdc++.h>
using namespace std;
using Int = long long;
signed main(){
  Int n;
  while(cin>>n,n){
    Int dp[n+3];
    memset(dp,0,sizeof(dp));
    dp[0]=1;
    for(Int i=0;i<n;i++){
      dp[i+1]+=dp[i];
      dp[i+2]+=dp[i];
      dp[i+3]+=dp[i];
    }
    cout<<((dp[n]+9)/10+364)/365<<endl;
  }
  return 0;
}