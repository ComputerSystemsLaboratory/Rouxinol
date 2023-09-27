#include<bits/stdc++.h>
using namespace std;
int main(){
  int cnt;
  cin>>cnt;
  while(cnt--){
    string a,b;
    cin>>a>>b;
    int dp[1000][1000]={};
    for(int i=0;i<b.size();i++){
      int nm=0;
      for(int j=0;j<a.size();j++){
	if(a[j]==b[i])dp[i][j]=nm+1;
	if(i){
	  dp[i][j]=max(dp[i][j],dp[i-1][j]);
	  nm=max(nm,dp[i-1][j]);
	}
      }
    }
    int ans=0;
    for(int i=0;i<a.size();i++)ans=max(ans,dp[b.size()-1][i]);
    cout<<ans<<endl;
   
  }
  
  return 0;
}