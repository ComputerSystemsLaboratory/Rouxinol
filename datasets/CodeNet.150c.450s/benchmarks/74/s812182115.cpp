#include<bits/stdc++.h>

using namespace std;

// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DPL_1_A&lang=jp

int CoinChangingProblem(int n,int m,vector<int> c) {
  vector<int> dp(n+1,INT_MAX);
  dp[0] = 0;
  for(int i=0;i<m;++i) {
    for(int j=0;j+c[i]<=n;++j) if( dp[j] != INT_MAX ) {
      dp[j+c[i]] = min(dp[j+c[i]],dp[j]+1);
    }
  }
  return dp[n];
}

int main() {
  int n,m;
  cin >> n >> m;
  vector<int> c(m);
  for(int i=0;i<m;++i) cin >> c[i];
  cout << CoinChangingProblem(n,m,c) << endl;
  return 0;
}