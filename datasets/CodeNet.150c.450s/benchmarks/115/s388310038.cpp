#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int q;
string X, Y;

int dp[1000][1000];

int solve(int idx_x, int idx_y) {
  if (idx_x < 0 || idx_y < 0)
    return 0;

  if (dp[idx_x][idx_y] != -1)
    return dp[idx_x][idx_y];

  int ret;
  
  if (X[idx_x] == Y[idx_y]) {
    ret = solve(idx_x - 1, idx_y - 1) + 1;
  } else {
    ret = solve(idx_x - 1, idx_y);
    ret = max(solve(idx_x, idx_y - 1), ret);
  }
  
  return dp[idx_x][idx_y] = ret;
}

int main(void) {
  cin >> q;
  for (int i = 0; i < q; i++) {
    cin >> X >> Y;
    memset(dp, -1, sizeof(dp));
    cout << solve(X.size()-1, Y.size()-1) << endl;
  }
  return 0;
}