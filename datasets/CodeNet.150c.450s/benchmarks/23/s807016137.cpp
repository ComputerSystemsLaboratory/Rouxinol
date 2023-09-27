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
  cout << fib(n) << endl;
  return 0;
}