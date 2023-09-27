#include<iostream>
#include<math.h>
#include<algorithm>
#include <cstring>
using namespace std;

string s, t;
int dp[1001][1001];

int dfs(int k){
  if(k > s.length()) return 0;
  for(int i = 0; i <= t.length(); i++){
    if(k == 0 && i == 0 ) continue;
    int p = 1000;
    if(s[k-1] == t[i-1] && k > 0 && i > 0) p = min(p, dp[k-1][i-1]);
    else if(k > 0 && i > 0) p = min(p, dp[k-1][i-1]) + 1;
    if(k > 0) p = min(p, dp[k-1][i] + 1);
    if(i > 0) p = min(p, dp[k][i-1] + 1);
    dp[k][i] = p;
  }

  return dfs(k+1);
}

int main(){
  cin >> s >> t;
  memset(dp, 0, sizeof(dp));
  dp[0][t.length()] = t.length();
  dp[s.length()][0] = s.length();
  dfs(0);
  // for(int i = 0; i <= s.length(); i++){
  //   for(int j = 0; j <= t.length(); j++){
  //     cout << dp[i][j] << " ";
  //   }
  //   cout << endl;
  // }
  cout << dp[s.length()][t.length()] << endl;;
}

