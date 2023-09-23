#include<iostream>
using namespace std;

int main() {

 int a, b, c, d, e, f;
 char op;
 while (true)
 {
  cin >> a >> op >> b;
  if (op == '?')
   break;
  c = a + b;
  d = a - b;
  e = a * b;
  if(b != 0)
  f = a / b;

  if (op == '+')
   cout << c << "\n";
  if (op == '-')
   cout << d << "\n";
  if (op == '*')
   cout << e << "\n";
  if (op == '/')
   cout << f << "\n";
 }
}