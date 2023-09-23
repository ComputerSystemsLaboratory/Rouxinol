#include <iostream>


int main() {
  int input, count=0;
   
  while (std::cin >> input) {
    if (input != 0) std::cout << "Case " << ++count << ": " << input << std::endl;
    else break;
  }
  return 0;
}