#include <iostream>
using namespace std;
int a, b;

int gcd(int x, int y)
{
  if (y == 0) return x;
  if (x == 1) return 1;
  if (y == 1) return 1;
  if (x > y) return gcd(y, x % y);
  if (y > x) return gcd(x, y % x);
  return x;
}

int main()
{
  cin >> a;
  cin >> b;
  int c = gcd(a, b);
  cout << c << endl;
  return 0;
}