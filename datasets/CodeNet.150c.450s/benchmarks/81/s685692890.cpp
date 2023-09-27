#include <algorithm>
#include <iostream>

using namespace std;

int dp[10][10];

int main() {
  for (;;) {
    int n, m = 0;
    cin >> n;
    if (!n) return 0;
    for (int i = 0; i < 10; i++)
      fill(dp[i], dp[i]+10, 1<<20);
    for (int i = 0; i < n; i++) {
      int a, b, c;
      cin >> a >> b >> c;
      m = max(m, max(a, b));
      dp[a][b] = c;
      dp[b][a] = c;
    }
    m++;
    for (int i = 0; i < m; i++)
      dp[i][i] = 0;
    for (int k = 0; k < m; k++)
      for (int i = 0; i < m; i++)
        for (int j = 0; j < m; j++)
          dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j]);
    int rt = 0, rc = 1<<20;
    for (int i = 0; i < m; i++) {
      int c = 0;
      for (int j = 0; j < m; j++)
        c += dp[i][j];
      if (rc > c) {
        rt = i;
        rc = c;
      }
    }
    cout << rt << ' ' << rc << endl;
  }
}