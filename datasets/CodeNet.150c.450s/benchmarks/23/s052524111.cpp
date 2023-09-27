#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

//??\???
#define MAX_N 44
int dp[MAX_N + 1];

int main() {
  ios::sync_with_stdio(false);
  int n;
  cin >> n;
  dp[0] = 1;
  dp[1] = 1;
  for(int i = 2; i <= n; i++) {
    dp[i] = dp[i-1] + dp[i-2];
  }

  cout << dp[n] << "\n";

  return 0;
}