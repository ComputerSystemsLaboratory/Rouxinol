#include <iostream>

int main() {
  int a;

  std::cin >> a;

  std::cout << (a/3600) << ":" << ((a%3600)/60) << ":" << (a%60) << std::endl;
 
  return 0;
}