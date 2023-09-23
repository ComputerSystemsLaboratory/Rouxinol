#include <bits/stdc++.h>
using namespace std;

long long f[10000000];

long long fib(int n)
{
  if (n == 0 || n == 1) return (1);
  if (f[n] != 0)  return (f[n]);
  else {
    f[n] = fib(n - 1) + fib(n - 2);
  }
  return f[n];
}
int main()
{
  int n;
  cin >> n;
  cout << fib(n) << endl;
}