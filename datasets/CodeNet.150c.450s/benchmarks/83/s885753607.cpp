#include <bits/stdc++.h>
using namespace std;

int v[1001], w[1001], dp[1001][1001], n;


int serch(int u)
{
  for (int i = 0; i <= u; i++) dp[n][i] = 0;

  for (int i = n - 1; i >= 0; i--){
    for (int j = 0; j <= u; j++){
      if (j < w[i]){
        dp[i][j] = dp[i + 1][j];
      }
      else {
        dp[i][j] = max(dp[i + 1][j], dp[i + 1][j - w[i]] + v[i]);
      }
    }
  }
  return (dp[0][u]);
}

int main()
{
  int u;

  cin >> n >> u;
  
  for (int i = 0; i < n; i++){    
    cin >> v[i] >> w[i];
  }

  int res = serch(u);
  cout << res << endl;
}