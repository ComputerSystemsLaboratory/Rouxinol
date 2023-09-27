#include <iostream>
using namespace std;

int main()
{
  int a, b, ans;
  int d;
  while (cin >> a >> b)
  {
    ans = a +  b;
    d = 0;
    while (ans > 0)
    {
      d++;
      ans = ans / 10;
    }
    cout << d << endl;
  }
}