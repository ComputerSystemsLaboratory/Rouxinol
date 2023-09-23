#include <bits/stdc++.h>
using namespace std;
#define MAX 100

int dp[MAX];

int fib(int n) {
  int x;
  if (dp[n] != 0) return dp[n];
  if ( n == 0 || n == 1) return 1;
  else {
    x = fib(n-1) + fib(n-2);
    dp[n] = x;
    return x;
  }
}

int main() {
  int ans, n;
  cin >> n;

  for (int i = 0; i <= n; i++) {
    dp[i] = 0;
  }

  ans = fib(n);

  cout << ans << endl;
}
