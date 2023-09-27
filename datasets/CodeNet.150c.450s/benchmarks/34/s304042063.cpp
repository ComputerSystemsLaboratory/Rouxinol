#include<iostream>

using namespace std;

#define rep(i, n) for (int i = 0; i < int(n); ++i)

long long dp[40];

int main() {
  dp[0] = 1;
  dp[1] = 1;
  dp[2] = 2;
  rep (i, 30) dp[i + 3] = dp[i] + dp[i + 1] + dp[i + 2];
  while (true) {
    int n;
    cin >> n;
    if (n == 0) break;
    cout << ((dp[n] + 9) / 10 + 364) / 365 << endl;
  }
  return 0;
}