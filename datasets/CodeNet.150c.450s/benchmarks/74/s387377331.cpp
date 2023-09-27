#include <iostream>
#include <algorithm>
using namespace std;
#define INF 1e+8

int main() {
  int w = 0;
  int n = 0;
  while(cin >> w >> n, w) {
    int coins[n];
    int dp[w*10];
    for (int i = 0; i < n; i++) {
      cin >> coins[i];
    }
    dp[0] = 0;
    for (int i = 1; i <= w; i++) {
      for (int j = 0; j < n; j++) {
        if (coins[j] == i) {
          dp[i] = 1;
          goto LE;
        }
      }
      dp[i] = INF;
LE:;
    }
    for (int i = 1; i <= w; i++) {
      if (dp[i] != INF) {
        for (int j = 0; j < n; j++) {
          dp[i + coins[j]] = min(dp[i+coins[j]], dp[i] + 1);
        }
      }
    }
    cout << dp[w] << endl;
    w = 0;
    n = 0;
  }
}