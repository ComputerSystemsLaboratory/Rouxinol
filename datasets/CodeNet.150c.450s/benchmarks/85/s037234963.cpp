#include<bits/stdc++.h>
using namespace std;

// macro
#define rep(i,n) for(i=0;i<n;i++)
#define ll long long
#define all(v) v.begin(), v.end()

// code starts
#define INF 1020304050

int main()
{
  int n;cin>>n;
  vector<int> r(n);
  vector<int> c(n);
  int i,j,k;
  rep(i,n)cin>>r[i]>>c[i];
  vector<vector<int>> dp(n,vector<int>(n,INF));
  rep(i,n)dp[i][i]=0;
  rep(i,n-1)dp[i][i+1]=r[i]*c[i]*c[i+1];
  for(i=2;i<n;i++)
  {
    rep(j,n-i)
    {
      for(k=1;k<=i;k++)
      {
        dp[j][j+i]=min(dp[j][j+i],dp[j][j+k-1]+dp[j+k][j+i]+r[j]*r[j+k]*c[j+i]);
      }
    }
  }
  cout<<dp[0][n-1]<<endl;
}

