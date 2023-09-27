#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int INF = 1 << 28;

int main()
{
  int n;
  while (cin >> n) {
    if (n == 0)
      break;

    int m = 0;
    vector<vector<int> > dp(10, vector<int>(10, INF));
    for (int i = 0; i < n; ++i) {
      int a, b, c;
      cin >> a >> b >> c;
      dp[a][b] = dp[b][a] = c;
      m = max(m, max(a, b));
    }
    ++m;

    for (int i = 0; i < 10; ++i)
      dp[i][i] = 0;

    for (int k = 0; k < m; ++k) {
      for (int i = 0; i < m; ++i) {
	for (int j = 0; j < m; ++j)
	  dp[i][j] = min(dp[i][j], dp[i][k]+dp[k][j]);
      }
    }

    int index = 0, sum = INF;
    for (int i = 0; i < m; ++i) {
      int tmp = 0;
      for (int j = 0; j < m; ++j)
	tmp += dp[i][j];

      if (sum > tmp) {
	sum = tmp;
	index = i;
      }
    }

    cout << index << " " << sum << endl;
  }
  return 0;
}