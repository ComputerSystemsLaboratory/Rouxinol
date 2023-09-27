#include <bits/stdc++.h>
using namespace std;

int main(void){
  int n, m;
  cin >> n >> m;
  vector<int> c(m);
  vector<int> dp(n+1);
  for(int i=0; i < m; i++)
    cin >> c[i];
  
  for(int i=0; i <= n; i++)
    dp[i] = INT_MAX/2;

  dp[0] = 0;

  for(int p = 0; p < m; p++){
    for(int q=c[p]; q <= n; q++){
      dp[q] = min(dp[q], dp[q-c[p]] + 1);
    }
  }
  cout << dp[n] << endl;
  return 0;
}