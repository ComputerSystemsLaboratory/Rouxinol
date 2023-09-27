#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#define FOR(i,b,e) for(int i=b;i<e;i++)
#define REP(i,n) FOR(i,0,n)
using namespace std;

int fib(int n, int dp[]) {
  if (dp[n] != -1) return dp[n];
  else {
    dp[n] = fib(n - 1, dp) + fib(n - 2, dp);
    return dp[n];
  }
}

int main() {
	cin.tie(0);
 	ios::sync_with_stdio(false);

  int n;
  cin >> n;
  int dp[n+1];
  REP(i, n+2) {
    if (i == 0 || i == 1) dp[i] = 1;
    else dp[i] = -1;
  }

  cout << fib(n, dp) << endl;
}