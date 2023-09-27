#include <iostream>
int main(void)
{
  while (1) {
    int a, b, r;
    char op;
    std::cin >> a >> op >> b;
    switch (op) {
    case '+':
      r = a + b;
      break;
    case '-':
      r = a - b;
      break;
    case '*':
      r = a * b;
      break;
    case '/':
      r = a / b;
      break;
    case '?':
      return 0;
    }
    std::cout << r << std::endl;
  }
}