#include <iostream>
#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a,b;
  char op = 'a';
  while (op != '?') {
    std::cin >> a >> op >> b;
    if (op == '?') {
      break;
    } else if (op == '+') {
      printf("%d\n", a+b);
    } else if (op == '-') {
      printf("%d\n", a-b);
    } else if (op == '*') {
      printf("%d\n", a*b);
    } else if (op == '/'){
      printf("%d\n", a/b);
    }
  }
  return 0;
}