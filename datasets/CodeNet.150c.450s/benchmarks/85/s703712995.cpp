#include <bits/stdc++.h>
using namespace std;

int main(void){
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n; cin >> n;
  vector<int> p(n+1);
  cin >> p[0] >> p[1];
  for(int i = 0; i < n-2; i++){
    int a, b; cin >> a >> b;
    p[i+2] = b;
  }
  {
    int a, b; cin >> a >> b;
    p[n] = b;
  }

  int dp[101][101];
  memset(dp, 0, sizeof(dp));

  n = p.size() - 1;
  for(int l = 2; l <= n; l++){
    for(int i = 1; i <= n-l+1; i++){
      int j = i+l-1;
      dp[i][j] = INT_MAX/10;
      for(int k = i; k < j; k++){
        dp[i][j] = min(dp[i][j], dp[i][k] + dp[k+1][j] + p[i-1]*p[k]*p[j]);
      }
    }
  }
  cout << dp[1][n] << endl;
  return 0;
}