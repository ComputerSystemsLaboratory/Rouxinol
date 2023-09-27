#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)n; i++)
const int INF = 1e9;

int main(){
  string s, t;
  cin >> s >> t;
  int ls = s.length();
  int lt = t.length();
  vector<vector<int>> dp(ls+1,vector<int>(lt+1,INF));
  rep(i,ls+1) dp[i][0] = i;
  rep(i,lt+1) dp[0][i] = i;
  for(int i = 1; i <= ls; i++) {
    for(int j = 1; j <= lt; j++) {
      if(s[i-1] == t[j-1]) dp[i][j] = min({dp[i-1][j-1],dp[i][j-1]+1,dp[i-1][j]+1});
      else dp[i][j] = min({dp[i-1][j-1]+1,dp[i][j-1]+1,dp[i-1][j]+1});
    }
  }
  cout << dp[ls][lt] << endl;
  return 0;
}
