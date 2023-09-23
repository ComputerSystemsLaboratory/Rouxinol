#include <iostream>
using namespace std;

int main() {
  int a, b, result;
  char op;

  while (true) {
    cin >> a >> op >> b;

    if (op == '?') {
      return 0;
    }

    if (op == '+') {
      result = a + b;
    } else if (op == '-') {
      result = a - b;
    } else if (op == '*') {
      result = a * b;
    } else if (op == '/') {
      result = a / b;
    } else {
      return -1;
    }

    cout << result << endl;
  }
}