#include<bits/stdc++.h>
using namespace std;
#define int long long
int dp[111][111];
signed main(){
  int n;
  cin>>n;
  int r[n],c[n];
  for(int i=0;i<n;i++) cin>>r[i]>>c[i];
  int INF=1LL<<55LL;
  for(int i=0;i<111;i++) fill_n(dp[i],111,INF);
  for(int i=0;i<n;i++) dp[i][i+1]=0;
  for(int i=2;i<=n;i++)
    for(int j=0;j<=n-i;j++)
      for(int k=1;k<i;k++)
	dp[j][j+i]=min(dp[j][j+i],dp[j][j+k]+dp[j+k][j+i]+(r[j]*r[j+k]*c[j+i-1]));
  cout<<dp[0][n]<<endl;
  return 0;
}