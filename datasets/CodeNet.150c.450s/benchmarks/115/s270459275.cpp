#include <cstdio>
#include <cmath>
#include <cstring>
#include <ctime>
#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
#include <sstream>
#include <typeinfo>
#include <fstream>
#include <climits>
#include <functional>

#define REP(i,n) for(int i = 0;i < n;i++)

using namespace std;
typedef long long ll;
const int INF = INT_MAX / 4;

const int max_n = 1e3;

int solve(void) {
  string x, y;
  cin >> x >> y;

  int xl = x.length(), yl = y.length();
  int dp[xl][yl];

  dp[0][0] = (int)(x[0] == y[0]);
  for (int j = 1;j < yl;j++)
    dp[0][j] = max(dp[0][j-1], (int)(x[0] == y[j]));
  for (int i = 1;i < xl;i++) {
    dp[i][0] = max(dp[i-1][0], (int)(x[i] == y[0]));
    for (int j = 1;j < yl;j++) {
      dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
      if (x[i] == y[j]) {
	dp[i][j] = max(dp[i][j], dp[i-1][j-1] + 1);
      }
    }
  }

  return dp[xl-1][yl-1];
}


int main(void)
{
  cin.tie(0);
  ios::sync_with_stdio(false);

  int cases;
  cin >> cases;
  REP(i, cases) {
    cout << solve() << "\n";
  }
  return 0;
}