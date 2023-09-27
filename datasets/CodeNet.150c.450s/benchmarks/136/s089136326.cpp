#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
  int c;
  while (b != 0){
    c = a % b;
    a = b;
    b = c;
  }
  return (a);
}

int lcm(int a, int b)
{
  if (a == 0 || b == 0) return (0);
  return ((a / gcd(a, b)) * b);
}

int main()
{
  int a, b;
  while (cin >> a >> b){
    cout << gcd(a, b) << " " << lcm(a, b) << endl;
  }
}