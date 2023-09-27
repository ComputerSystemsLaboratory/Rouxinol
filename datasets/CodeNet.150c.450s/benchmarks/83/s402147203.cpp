#include<bits/stdc++.h>
using namespace std;
int v[1001];
int w[1001];
int dp[101][10001];
int N,W;
int solve(int a,int b);
int main(){
  cin >> N >> W;
  for(int i=0;i<N;i++){
    cin >> v[i] >> w[i];
  }
  cout << solve(0,W) << endl;
  
}
int solve(int a,int b){
  if(dp[a][b] != 0)return dp[a][b];
  if(a == N){
    return dp[a][b] = 0;
  }else if(b - w[a] < 0){
    return dp[a][b] = solve(a+1,b);
  }
  else{
    return dp[a][b] = max(solve(a+1,b),solve(a+1,b-w[a])+v[a]) ;
  }
}