#include <iostream>

using namespace std;

int i = 1;
int sum = 1;
int num[2] = {1, 1};
int l = 0;
int fib(int n)
{
  if (i == n) return sum;
  sum += num[l];
  num[l] = sum;
  l = 1 - l;

  if (i != n) {
   i++;
   return fib(n);
  }
}

int main()
{
  int n;
  cin >> n;
  
  if (n == 0) cout << 1 << endl;
  else cout << fib(n) << endl;

  return 0;
}