#include <iostream>
using namespace std;

int main() {
  int x,y,z;
  char op;
  while (cin >> x >> op >> y,op!='?') {
    switch (op) {
      case '+':
        z=x+y;
        break;
      case '-':
        z=x-y;
        break;
      case '*':
        z=x*y;
        break;
      case '/':
        z=x/y;
        break;
    }
    cout << z << endl;
  }
  return 0;
}