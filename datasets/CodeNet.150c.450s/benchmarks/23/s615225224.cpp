#include <iostream>
using namespace std;
typedef long long ll;
#define int ll

int dp[45];

int fib(int n) {
  if(dp[n]) return dp[n];
  if(n == 0) return 1;
  else if(n == 1) return 1;
  else return dp[n] = fib(n-1) + fib(n-2);
}

signed main(void) {
  int n;
  cin >> n;
  cout << fib(n) << endl;
  return 0;
}