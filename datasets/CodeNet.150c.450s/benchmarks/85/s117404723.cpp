#include <bits/stdc++.h>
#include<algorithm>
#define int long long
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define INF 1000000000000
int MOD=1000000007;
int dp[101][101];
signed main() {
  int n;
  cin>>n;
  rep(i,101){
    rep(j,101){
      dp[i][j]=0;
    }
  }
  vector<int>gyou(n+1);
  vector<int>retu(n+1);
  rep(i,n){
    cin>>gyou[1+i]>>retu[1+i];
  }
  for(int len=2;len<=n;len++){
    for(int l=1;l<=n-len+1;l++){
      int r=l+len-1;
      dp[l][r]=min(dp[l+1][r]+gyou[l]*retu[l]*retu[r],dp[l][r-1]+gyou[l]*gyou[r]*retu[r]);
      if(len>=4)for(int k=l+1;k<r-1;k++){dp[l][r]=min(dp[l][r],dp[l][k]+dp[k+1][r]+gyou[l]*retu[k]*retu[r]);}
    }
  }
  cout<<dp[1][n]<<endl;
}

