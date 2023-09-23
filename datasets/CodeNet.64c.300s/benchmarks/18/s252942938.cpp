#include<iostream>
using namespace std;

int main() {
  int n;
  while (cin >> n && n) {
    int dp[40];
    for (int i = 0; i < 40; i++) {
      dp[i] = 0;
    }
    dp[0] = 1;
    for (int i = 0; i <= n; i++) {
      dp[i+3] += dp[i];
      dp[i+2] += dp[i];
      dp[i+1] += dp[i];
    }
    cout << (dp[n] + 3649) / 3650 << endl;
  }
}