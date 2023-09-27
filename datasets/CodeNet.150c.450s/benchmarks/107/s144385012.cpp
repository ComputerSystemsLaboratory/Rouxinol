#include<bits/stdc++.h>
using namespace std;
#define int long long

#ifdef LOCAL_DEBUG
  #include "LOCAL_DEBUG.hpp"
#endif

int EditDistance(string a,string b){
  vector<vector<int>> dp(a.size()+1,vector<int>(b.size()+1,1LL<<60));
  for(int i = 0; i < a.size(); i++) dp[i][0] = i;
  for(int i = 0; i < b.size(); i++) dp[0][i] = i;
  for(int i = 0; i < a.size(); i++){
    for(int j = 0; j < b.size(); j++){
      dp[i+1][j+1] = min({dp[i+1][j+1],dp[i][j+1]+1,dp[i+1][j]+1}); //挿入、削除
      if(a[i] == b[j]) dp[i+1][j+1] = min(dp[i+1][j+1],dp[i][j]);
      else dp[i+1][j+1] = min(dp[i+1][j+1],dp[i][j]+1); //置換
    }
  }
  return dp[a.size()][b.size()];
}

signed main(){

  string s,t; cin >> s >> t;
  cout << EditDistance(s,t) << endl;

  return 0;
}

