#include <iostream>
#include <unordered_map>
using namespace std;
int fib(int);
unordered_map<int, int> memoFib;

int main() {
  int n;
  cin >> n;
  cout << fib(n) << endl;
  return 0;
}

int fib(int n) {
  if(memoFib.count(n)) return memoFib[n];
  int a;
  a = memoFib[n] = n == 0 || n == 1 ? 1 : fib(n - 1) + fib(n - 2);
  return a;
}