#include <iostream>
using namespace std;

int LCM(int n, int m)
{
  if (n == 0){
    return (m);
  }
  m = m % n;
  return (LCM(m, n));
}

int main()
{
  int a, b, lcm, gcd;

  while (cin >> a >> b){

    if (a > b){
      int c = a;
      a = b;
      b = c;
    }

    lcm = LCM(a, b);
    gcd = a / lcm * b;

    cout << lcm << " " << gcd << endl;
  }
}