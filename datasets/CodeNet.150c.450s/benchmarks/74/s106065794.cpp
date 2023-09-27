#include <iostream>
#include <cstring>
using namespace std;
const int INF = 1e9;
int m, n;
int c[21];
int dp[21][100005];

int dfs(int i, int sum) {
  if (i == m) return n == sum ?  0 : INF;
  if (dp[i][sum] != -1) return dp[i][sum];
  int ret = dfs(i + 1, sum);
  if (sum + c[i] <= n) ret = min(ret, dfs(i, sum + c[i]) + 1);
  return dp[i][sum] = ret;
}

int main() {
  for (int i = 0; i < 21; i++) for (int j = 0; j < 100005; j++) dp[i][j] = -1;
  cin >> n >> m;
  for (int i = 0; i < m; i++) cin >> c[i];
  cout << dfs(0, 0) << endl;
}