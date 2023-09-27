#include <iostream>

using namespace std;

int main() {
  for (;;) {
    int a, b;
    cin >> a >> b;
    if (!a && !b) return 0;
    int n, dp[16][16];
    bool M[16][16];
    for (int x = 0; x < a; x++)
      for (int y = 0; y < b; y++)
        M[x][y] = true;
    cin >> n;
    for (int i = 0; i < n; i++) {
      int x, y;
      cin >> x >> y;
      M[x-1][y-1] = false;
    }
    dp[0][0] = 1;
    for (int x = 1; x < a; x++)
      dp[x][0] = M[x][0] ? dp[x-1][0] : 0;
    for (int y = 1; y < b; y++)
      dp[0][y] = M[0][y] ? dp[0][y-1] : 0;
    for (int x = 1; x < a; x++)
      for (int y = 1; y < b; y++)
        dp[x][y] = M[x][y] ? dp[x-1][y] + dp[x][y-1] : 0;
    cout << dp[a-1][b-1] << endl;
  }
}