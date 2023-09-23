#include <iostream>
using namespace std;

typedef unsigned long long ull;
int dp[45] = {0};

ull fib(int n) {
  // ???????????????
  if(dp[n] != 0)return dp[n];
  if(n == 1 || n == 0)return 1;
  return dp[n] = fib(n - 2) + fib(n - 1);
}

int main(void) {
  int n;
  cin >> n;
  //cout << fib(n) << endl;
  dp[0] = 1;
  dp[1] = 1;
  for(int i = 2; i <= n; i++){
    dp[i] = dp[i - 1] + dp[i - 2];
  }
  cout << dp[n] << endl;
  return 0;
}