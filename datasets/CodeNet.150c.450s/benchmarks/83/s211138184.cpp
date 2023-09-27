#include<bits/stdc++.h>

using namespace std;

// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DPL_1_B&lang=jp

int KnapsackProblem01(int N,int W,vector<int> v,vector<int> w) {
  vector<int> dp(W+1,0);
  for(int i=0;i<N;++i) {
    for(int j=W-w[i];j>=0;--j) {
      dp[j+w[i]] = max(dp[j+w[i]],dp[j]+v[i]);
    }
  }
  return dp[W];
}

int main() {
  int N,W;
  cin >> N >> W;
  vector<int> v(N),w(N);
  for(int i=0;i<N;++i) cin >> v[i] >> w[i];
  cout << KnapsackProblem01(N,W,v,w) << endl;
  return 0;
}