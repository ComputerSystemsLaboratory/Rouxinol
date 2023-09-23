#include <iostream>
using namespace std;

int main() {
  int a, b;
  char op;

  for (;;) {
    cin >> a >> op >> b;
    if (op == '?') {
      break;
    }

    int res = 0;
    switch (op) {
      case '+':
        res = a + b;
        break;
      case '-':
        res = a - b;
        break;
      case '*':
        res = a * b;
        break;
      case '/':
        res = a / b;
        break;
    }
    cout << res << endl;
  }

  return 0;
}