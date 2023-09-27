#include <iostream>
#include <cstdio>
#include <iomanip>

using namespace std;

int main()
{
  int a;
  int b;
  char op;
  while(1)
  {
    cin >> a >> op >> b;
    
    if(op=='?')
      break;
    if(op=='+')
      cout << a+b<<"\n";
    if(op=='-')
      cout << a-b<<"\n";
    if(op=='*')
      cout << a*b<<"\n";
    if(op=='/')
      cout << a/b<<"\n";
  }
}