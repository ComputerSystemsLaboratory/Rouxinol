#include <iostream>
using namespace std;
int main() {
 int a, b, x;
 char op;
 while(1){
 cin >> a >> op >> b;
 switch(op){
  case '+':
    x = a+b;
    break;
  case '-':
    x = a-b;
    break;
  case '*':
    x = a*b;
    break;
  case '/':
    x = a/b;
    break;
  case '?':
    return 0;
  }
 cout << x << endl;
 }
    return 0;
  }