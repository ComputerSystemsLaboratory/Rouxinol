#include<bits/stdc++.h>

using namespace std;

int main(){
  int n,m;
  cin >> n >> m;
  vector<int> vec(m), dp(n+1,INT_MAX);
  for(int i = 0; i < m; i++) cin >> vec[i];
  dp[0] = 0;
  for(int i = 0; i <= n; i++){
    if(dp[i] == INT_MAX) continue;
    for(int j = 0; j < (int)vec.size(); j++){
      if(i+vec[j] <= n)
        dp[i+vec[j]] = min(dp[i+vec[j]], dp[i]+1);
    }
  }
  cout << dp[n] << endl;
  return 0;
}