#include <iostream>

using namespace std;

int main()
{
  int a, b;
  char op;
  while(1){
    cin >> a >> op >> b;
    if(op == '?') break;
    switch(op){
    case '+':
      cout << a+b;
      break;
    case '-':
      cout << a-b;
      break;
    case '*':
      cout << a*b;
      break;
    case '/':
      cout << a/b;
      break;
    default:
      break;
    }
    cout << '\n';
  }
}