#include <iostream>

int main() {
  int first=0, second=0, third=0;
  for (int i=0; i<10; ++i) {
    int a;
    std::cin >> a;
    if (a >= first) {third = second; second = first; first = a;}
    else if (a >= second) {third = second; second = a;}
    else if (a >= third) {third = a;}
  }
  std::cout << first << std::endl;
  std::cout << second << std::endl;
  std::cout << third << std::endl;

  return 0;
}
