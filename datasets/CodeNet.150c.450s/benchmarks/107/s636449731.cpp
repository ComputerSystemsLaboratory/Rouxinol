#include<bits/stdc++.h>

using namespace std;

// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DPL_1_E

int LevenshteinDistance(string s1,string s2) {
  int n = (int)s1.size(), m = (int)s2.size();
  vector<vector<int> > dp(n+1,vector<int>(m+1));
  for(int i=0;i<=n;++i) dp[i][0] = i;
  for(int i=0;i<=m;++i) dp[0][i] = i;
  for(int i=1;i<=n;++i) {
    for(int j=1;j<=m;++j) {
      dp[i][j] = min(dp[i-1][j]+1,
                     min(dp[i][j-1]+1,dp[i-1][j-1]+(s1[i-1]!=s2[j-1])));
    }
  }
  return dp[n][m];
}

int main() {
  string s1,s2;
  getline(cin,s1);
  getline(cin,s2);
  cout << LevenshteinDistance(s1,s2) << endl;
  return 0;
}