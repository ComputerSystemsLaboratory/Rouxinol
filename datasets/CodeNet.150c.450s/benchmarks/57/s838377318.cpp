#include <iostream>

int main() {
  int a;
  int b;
  char op;

  int calc;
  while(1) {
    std::cin >> a >> op >> b;
    if(op == '?') break;
    switch(op) {
      case '+':
        calc = a + b;
        break;
      case '-':
        calc = a - b;
        break;
      case '*':
        calc = a * b;
        break;
      case '/':
        calc = a / b;
        break;
    }
    std::cout << calc << std::endl;
  }

  return 0;
}