#include <bits/stdc++.h>
using namespace std;

int fib(int n)
{
  int num[10000] = {1, 1};
  for (int i = 2; i <= n; i++){
    num[i] = num[i - 1] + num[i - 2];
  }
  return (num[n]);
}

int main()
{
  int n;
  cin >> n;
  cout << fib(n) << endl;
}