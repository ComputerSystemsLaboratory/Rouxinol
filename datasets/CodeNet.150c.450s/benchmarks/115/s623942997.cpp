#include<bits/stdc++.h>
using namespace std;

int Q;
string X,Y;
int N,M;
int dp[1001][1001];

int solve(int xd,int yd){
  if( dp[xd][yd] != -1 ) return dp[xd][yd];
  if( xd==N || yd==M ) return dp[xd][yd] = 0;
  int ret;
  if( X[xd] == Y[yd] )
    ret = solve( xd+1,yd+1 ) + 1;
  else
    ret = max( solve(xd+1,yd), solve(xd,yd+1) );

  return dp[xd][yd] = ret;
}

int main(){
  cin >> Q;
  for(int ttt=0;ttt<Q;ttt++){
    cin >>X >> Y;
    N = X.size(); M = Y.size();
    memset(dp,-1,sizeof(dp));
    cout << solve(0,0) << endl;
  }
}