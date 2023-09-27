#include <iostream>
#include <algorithm>
#include <climits>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

#define str to_string
#define rep(i, n) for (int i=0; i<int(n); i++)
#define all(c) (c).begin(), (c).end()


#define MAX_N 31
int n;
int dp[MAX_N];

int solve() {
  // clear
  rep(i, MAX_N) dp[i] = 0;
  // dp
  dp[0] = 1;
  dp[1] = 1;
  dp[2] = 2;
  for(int i=3; i<=n; i++) {
    dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
  }
  return dp[n];
}


int main() {
  while (true) {
    cin >> n;
    if (n == 0) break;

    int ans = solve();
    int wer = ans / 3650;
    if (ans % 3650 != 0) wer += 1;
    cout << wer << '\n';
  }
  return 0;
}