#include <iostream>
using namespace std;

int main() {
  int x, y;
  char op;

  while(true) {
    cin >> x >> op >> y;

    if(op == '+') {
      cout << x + y << endl;
    } else if(op == '-') {
      cout << x - y << endl;
    } else if(op == '*') {
      cout << x * y << endl;
    } else if(op == '/') {
      cout << x / y << endl;
    } else {
      break;
    }
  }
}