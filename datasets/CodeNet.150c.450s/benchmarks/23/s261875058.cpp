#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int fib(int n)
{
  static int memos[45];
  if (n < 2) return 1;
  if (memos[n] != 0) return memos[n];
  return memos[n] = fib(n - 1) + fib(n - 2);
}

int main(void)
{
  int n;
  cin >> n;
  cout << fib(n) << endl;
  return 0;
}