#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <queue>
#include <iomanip>
#include <string>
#include <algorithm>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define rep_1 (i,j,n) for(int i=j;i<n;i++)
typedef long long ll;
typedef long l;
const ll l_INF = 1010101010101010;
const int INF = 1010101010;
const int dx[] = {-1,0,1,0,-1,-1,1,1};
const int dy[] = {0,-1,0,1,1,-1,1,-1};
ll dp[110][110];
ll m[2][110];

ll solve(int x,int y){
  if(dp[x][y]!=l_INF) return dp[x][y];
  ll ans=l_INF;
  for(int i=x+1;i<=y;i++){
    ans=min(ans,solve(x,i-1)+solve(i,y)+m[0][x]*m[1][i-1]*m[1][y]);
  }
  //cout<<ans<<endl;
  return dp[x][y]=ans;
}
int main(){
  int n; cin>>n;
  rep(i,n) cin>>m[0][i]>>m[1][i];
  rep(i,n)rep(j,n) dp[i][j]=l_INF;
  rep(i,n) dp[i][i]=0;
  rep(i,n-1) dp[i][i+1]=m[0][i]*m[0][i+1]*m[1][i+1];
  cout<<solve(0,n-1)<<endl;
}

