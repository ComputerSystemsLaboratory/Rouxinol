#include <iostream>

using namespace std;

const int MAX_A = 17;
const int MAX_B = 17;
bool passable[MAX_A][MAX_B];
int dp[MAX_A][MAX_B];
int main() {
  int a, b;
  while (cin >> a >> b) {
    if (a == 0 && b == 0) break;
    int N;
    cin >> N;
    for (int i = 1; i <= a; i++) {
      for (int j = 1; j <= b; j++) {
        passable[i][j] = true;
      }
    }
    for (int i = 0; i < N; i++) {
      int x, y;
      cin >> x >> y;
      passable[x][y] = false;
    }
    dp[1][0] = 1;
    for (int i = 1; i <= a; i++) {
      for (int j = 1; j <= b; j++) {
        if (passable[i][j]) {
          dp[i][j] = dp[i-1][j] + dp[i][j-1];
        } else {
          dp[i][j] = 0;
        }
      }
    }
    cout << dp[a][b] << endl;
  }

  return 0;
}