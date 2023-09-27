// input: aldsalds1_10_a.in
#include<iostream>
#define MAX_N 45
#define NIL -1
using namespace std;

int dp[MAX_N];

int fib(int n) {
  if(n == 0 || n == 1)
    return 1;

  if(dp[n] != NIL)
    return dp[n];

  int v = fib(n-1) + fib(n-2);
  dp[n] = v;

  return v;
}

int main() {
  for(int i=0; i<MAX_N; i++)
    dp[i] = NIL;

  int x;
  cin >> x;

  cout << fib(x) << endl;
}