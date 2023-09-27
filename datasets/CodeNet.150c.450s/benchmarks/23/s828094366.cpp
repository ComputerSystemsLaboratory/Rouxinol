#include <iostream>

using namespace std;

unsigned long long dp[50] = {0};

unsigned long long fib(int n){
  if(n == 0){
    return 1;
  } else if(n == 1){
    return 1;
  } else if(dp[n] != 0){
    return dp[n];
  } else {
    dp[n] = fib(n-1) + fib(n-2);
    return dp[n];
  }

}

int main(){
  int n;

  cin >> n;

  cout << fib(n) << endl;

  return 0;
}