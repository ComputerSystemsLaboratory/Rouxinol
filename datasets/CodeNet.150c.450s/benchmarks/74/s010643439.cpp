#include<bits/stdc++.h>
using namespace std;
int dp[21][50001];
int n,m;
int c[21];
int solve(int a,int b);
int main(){
  memset(dp,-1,sizeof(dp));
  cin >> n >> m;
  for(int i=0;i<m;i++){
    cin >> c[i];
  }
  cout << solve(0,n) << endl;
}
int solve(int a,int b){
  if(dp[a][b] != -1)return dp[a][b];
  if(b == 0)return dp[a][b] = 0;
  else if(a == m)return dp[a][b] = 100000;
  else if(b < c[a])return dp[a][b] = solve(a+1,b);
  else return dp[a][b] = min(solve(a+1,b),min(solve(a,b-c[a])+1,solve(a+1,b-c[a])+1));
  
}