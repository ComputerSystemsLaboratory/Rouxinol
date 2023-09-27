#include <iostream>
#include <vector>

using namespace std;

vector<int> F(45, -1);

int fib(int n)
{
  if (!n || n == 1) return F[n] = 1;
  if (F[n] != -1) return F[n];

  return F[n] = fib(n - 1) + fib(n - 2);
}

int main()
{
  int n;
  cin >> n;

  cout << fib(n) << endl;

  return 0;
}