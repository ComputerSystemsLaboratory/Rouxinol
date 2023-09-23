#include <bits/stdc++.h>
using namespace std;

int main()
{
  char op;
  int a, b;

  while (cin >> a >> op >> b, op != '?'){
    if (op == '+') cout << a + b;
    if (op == '-') cout << a - b;
    if (op == '*') cout << a * b;
    if (op == '/') cout << a / b;
    cout << endl;
  }
}