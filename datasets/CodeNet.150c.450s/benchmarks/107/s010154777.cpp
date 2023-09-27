#include<bits/stdc++.h>
using namespace std;
#define int long long
int editDistance(string x,string y){
  int n=x.length(),m=y.length();
  int INF=1LL<<55LL;
  vector<vector<int> > dp(n+1,vector<int>(m+1,INF));
  for(int i=0;i<=n;i++) dp[i][0]=i;
  for(int i=0;i<=m;i++) dp[0][i]=i;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
      dp[i][j]=min(dp[i][j],dp[i-1][j]+1);
      dp[i][j]=min(dp[i][j],dp[i][j-1]+1);
      dp[i][j]=min(dp[i][j],dp[i-1][j-1]+(x[i-1]!=y[j-1]));
    }
  }
  return dp[n][m];
}
signed main(){
  string s1,s2;
  cin>>s1>>s2;
  cout<<editDistance(s1,s2)<<endl;
  return 0;
}