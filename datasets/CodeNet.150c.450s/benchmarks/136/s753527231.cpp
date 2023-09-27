#include <iostream>

using namespace std;

int getGcd(int a, int b)
{
  while (a && b) {
    if (a > b) a %= b;
    else if (b > a) b %= a;
    else if (a == b) return a;
  }

  if (a > b) return a;
  return b;
}

int main(void)
{
  int a, b;

  while (cin >> a >> b) {
    int gcd = getGcd(a, b);
    cout << gcd << ' ' << a * (b / gcd) << endl;
  }

  return 0;
}