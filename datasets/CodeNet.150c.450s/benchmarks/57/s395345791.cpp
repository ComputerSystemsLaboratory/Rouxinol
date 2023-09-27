#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
  while(1)
  {
    int a, b;
    char op;
    cin >> a >> op >> b;
    if(op == '?') break;

    if(op == '+' || op == '-')
      cout << (op == '+' ? a+b : a-b) << endl;
    else
      cout << (op == '*' ? a*b : a/b) << endl;
  }
  return 0;
}