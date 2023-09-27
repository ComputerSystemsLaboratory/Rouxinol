#include <bits/stdc++.h>
using namespace std;
#define int long long
const int INF = 1e9;

signed main(){
  int N; cin >> N;
  vector<vector<int> > dp(N + 1, vector<int> (N + 1, 0));
  vector<int> r(N + 1);
  for(int i = 1; i <= N; i++) cin >> r[i - 1] >> r[i];
  for(int l = 1; l < N; l++){
    for(int i = 1; i <= N - l; i++){
      int j = l + i;
      dp[i][j] = INF;
      for(int k = i; k < j; k++){
        dp[i][j] = min(dp[i][j], dp[i][k] + dp[k + 1][j] + r[i - 1] * r[k] * r[j]);
      }
    }
  }
  cout << dp[1][N] << endl;
}
