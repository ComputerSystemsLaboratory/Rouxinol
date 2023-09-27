#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9;

int main(){
  string s, t; cin >> s >> t;
  int N = s.size(), M = t.size();
  vector<vector<int> > dp(N + 1, vector<int> (M + 1, INF));
  for(int i = 0; i <= N; i++) dp[i][0] = i;
  for(int i = 0; i <= M; i++) dp[0][i] = i;
  for(int i = 1; i <= N; i++){
    for(int j = 1; j <= M; j++){
      dp[i][j] = min(dp[i - 1][j] + 1, dp[i][j - 1] + 1);
      dp[i][j] = min(dp[i][j], dp[i - 1][j - 1] + (s[i - 1] != t[j - 1]));
    }
  }
  cout << dp[N][M] << endl;
}
  
