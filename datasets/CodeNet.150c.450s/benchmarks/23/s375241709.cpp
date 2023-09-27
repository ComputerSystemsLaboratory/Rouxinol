#include <iostream>
using namespace std;

int memo[45] = {0};

int Fibonacci(int n) {
  if(n == 0 || n == 1) return memo[n] = 1;
  if(memo[n] != 0) { // memo[n]????¨??????????
	return memo[n];
  }
  return memo[n] = Fibonacci(n - 2) + Fibonacci(n - 1);
}

int main() {
  int n;
  cin >> n;
  cout << Fibonacci(n) << endl;
  return 0;
}