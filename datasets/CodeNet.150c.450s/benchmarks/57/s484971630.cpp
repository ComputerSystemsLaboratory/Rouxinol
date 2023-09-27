#include <iostream>

using namespace std;

int main() {
  int a,b;
  char op;
  bool loop = true;
  while (loop) {
    cin >> a >> op >> b;
    switch(op) {
    case '+':
      cout << a+b << endl;
      break;
    case '-':
      cout << a-b << endl;
      break;
    case '*':
      cout << a*b << endl;
      break;
    case '/':
      cout << a/b << endl;
      break;
    case '?':
      loop = false;
    }
  }
  return 0;
}