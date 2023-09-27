#include <iostream>

int dp[50];

int fib(int n) {
  if(dp[n] != -1) return dp[n];
  if(n == 0) return 1;
  if(n == 1) return 1;

  return dp[n] = fib(n-1) + fib(n-2);
}

int main() {
  int n;
  std::cin >> n;

  for(int i=0; i<50; ++i) {
    dp[i] = -1;
  }
  dp[0] = 1;
  dp[1] = 1;

  int fb = fib(n);
  std::cout << fb << std::endl;

}
