#include<iostream>

using namespace std;

int dp[45] = {1,1};
int fibo(int n){
  if(dp[n] != 0) return dp[n];
  dp[n] = fibo(n-1) + fibo(n-2);
  return dp[n];
}

int main() {
  int n;
  cin >> n;
  cout << fibo(n) << endl;
  return 0;
}