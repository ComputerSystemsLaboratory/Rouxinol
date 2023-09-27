#include <iostream>
#include <string>
#include <algorithm>
#define int long long
using namespace std;

signed main() {
  int n;
  cin >> n;
  for (int c = 0; c < n; c++) {
    string x, y;
    cin >> x >> y;

    int dp[x.size() + 1][y.size() + 1];
    for (int i = 0; i < x.size() + 1; i++) {
      dp[i][0] = 0;
    }

    for (int j = 0; j < y.size() + 1; j++) {
      dp[0][j] = 0;
    }
      
    for (int i = 1; i < x.size() + 1; i++) {
      for (int j = 1; j < y.size() + 1; j++) {
	if (x[i - 1] == y[j - 1]) {
	  dp[i][j] = dp[i - 1][j - 1] + 1;
	} else {
	  dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
	}
      }
    }

    cout << dp[x.size()][y.size()] << endl;
  }

  return 0;
}