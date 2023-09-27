#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int n;
int dp[40];

int main() {
  while (cin >> n) {
    if (n == 0) break;
    for (int i=0; i<40; i++) dp[i] = 0;
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;
    for (int i=3; i<n+1; i++) {
      dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
    }
    cout << ceil(dp[n] / 3650.0) << "\n";
  }
  return 0;
}