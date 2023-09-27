#include <iostream>
#include <vector>
#include <queue>
using namespace std;
const int INF = 1<<29;


int main(){
  string s1, s2; cin >> s1 >> s2;

  int n = s1.size(), m = s2.size();
  vector<vector<int> > dp(n+1, vector<int>(m+1));
  for(int i=0; i <= n; ++i) dp[i][0] = i;
  for(int i=0; i <= m; ++i) dp[0][i] = i;

  for(int i=1; i <= n; ++i) {
    for(int j=1; j <= m; ++j) {
      // insert delete replace
      int replace = 1;
      if(s1[i-1] == s2[j-1]) replace = 0;

      dp[i][j] = min(dp[i-1][j] + 1, min(dp[i][j-1] + 1, dp[i-1][j-1] + replace));
    }
  }

  cout << dp[n][m] << endl;

  return 0;
}
