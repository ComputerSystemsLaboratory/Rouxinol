#include<bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < n; i++)
#define pb push_back
using namespace std;
typedef long long ll;

int main(){
  string a,b;
  cin>>a>>b;

  int dp[1005][1005];
  rep(i,1005)rep(j,1005) dp[i][j] = 1005;
  rep(i,a.size()+1) dp[i][0] = i;
  rep(i,b.size()+1) dp[0][i] = i;

  rep(j,a.size())rep(k,b.size()){
    if(a[j]==b[k]) dp[j+1][k+1] = min(dp[j+1][k+1],dp[j][k]);
    else{
      dp[j+1][k+1] = min(dp[j][k+1]+1,dp[j+1][k+1]);
      dp[j+1][k+1] = min(dp[j+1][k]+1,dp[j+1][k+1]);
      dp[j+1][k+1] = min(dp[j][k]+1,dp[j+1][k+1]);
    }
  }
  

  cout << dp[a.size()][b.size()] << endl;
}
