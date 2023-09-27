#include <iostream>
#include <vector>
using namespace std;

#define INF 1e9
vector<int> memo;

int fib(int n){
  if(memo[n] == -INF){ memo[n] = fib(n - 1) + fib(n - 2); }
  return memo[n];
}

int main(void){
  int n;
  cin >> n;
  
  memo = vector<int>(n + 1, -INF);
  memo[0] = memo[1] = 1; 
  
  cout << fib(n) << endl;
  return 0;
}