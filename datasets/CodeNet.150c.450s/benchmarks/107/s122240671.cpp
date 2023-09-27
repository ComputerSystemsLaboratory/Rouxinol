#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
  string x, y;
  cin >> x >> y;

  int m = x.length(), n = y.length();
  
  vector<vector<int> > dp(m + 1, vector<int>(n + 1));
  for(int i = 0; i <= m; i++){ dp[i][0] = i; }
  for(int i = 0; i <= n; i++){ dp[0][i] = i; }
  
  for(int i = 1; i <= m; i++){
    for(int j = 1; j <= n; j++){
      dp[i][j] = min(dp[i - 1][j] + 1, dp[i][j - 1] + 1);
      if(x[i - 1] == y[j - 1])
        dp[i][j] = min(dp[i][j], dp[i - 1][j - 1]);
      else
        dp[i][j] = min(dp[i][j], dp[i - 1][j - 1] + 1);
    }
  }

  cout << dp[m][n] << endl;  
  return 0;
}


