#include<bits/stdc++.h>
using namespace std;

int main(){
  int n, m;
  cin >> n >> m;
  int v[n];
  int w[n];
  for(int i = 0; i < n; i++){
    scanf("%d %d", &v[i], &w[i]);
  }
  int dp[110][10010];
  memset(dp, 0, sizeof(dp));
  for(int i = 0; i < n; i++){
    for(int j = 0; j <= 10000; j++){
      if(j < w[i]){
        dp[i + 1][j] = dp[i][j];
      }else{
        dp[i + 1][j] = max(dp[i][j], dp[i][j - w[i]] + v[i]);
      }
    }
  }
  cout << dp[n][m] << endl;
}