#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int a, b;
  while (cin >> a >> b) {
    if ((a|b) == 0)
      break;

    int n;
    cin >> n;
    vector<vector<int> > work(b, vector<int>(a, 0));
    for (int i = 0; i < n; ++i) {
      int x, y;
      cin >> x >> y;
      work[y-1][x-1] = 1;
    }

    vector<vector<int> > dp(b, vector<int>(a, 0));
    dp[0][0] = 1;
    for (int i = 0; i < b; ++i) {
      for (int j = 0; j < a; ++j) {
	if (work[i][j])
	  continue;
	if (i != b-1)
	  dp[i+1][j] += dp[i][j];
	if (j != a-1)
	  dp[i][j+1] += dp[i][j];
      }
    }

    cout << dp[b-1][a-1] << endl;
  }
  return 0;
}