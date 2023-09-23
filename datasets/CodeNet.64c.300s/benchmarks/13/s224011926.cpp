#include <iostream>
using namespace std;

#define FOR(i, a, b) for(int i = (a); i < (b); i++)

int main(void) {
  int n; cin >> n;
  int dp[n];
  dp[0] = dp[1] = 1;
  FOR(i, 2, n + 1) {
    dp[i] = dp[i - 1] + dp[i - 2];
  }
  cout << dp[n] <<endl;
  return 0;
}