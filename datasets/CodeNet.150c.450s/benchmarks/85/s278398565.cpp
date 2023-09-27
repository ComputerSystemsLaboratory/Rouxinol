#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int N;
vector<int> R, C;
vector<vector<int> > dp;

int dfs(int l, int r) {
  if ( r == l ) return 0;
  if ( dp[l][r] ) return dp[l][r];

  int ret = INF;
  for ( int i = l; i < r; i++ ) {
    ret = min(ret, dfs(l, i)+dfs(i+1, r)+R[l]*C[i]*C[r]);
  }
  
  return dp[l][r] = ret;
}

int main() {  
  cin >> N;

  R = vector<int>(N);
  C = vector<int>(N);
  for ( int i = 0; i < N; i++ ) {
    cin >> R[i] >> C[i];
  }

  dp = vector<vector<int> >(N, vector<int>(N, 0));

  cout << dfs(0, N-1) << endl;
  
  return 0;
}

