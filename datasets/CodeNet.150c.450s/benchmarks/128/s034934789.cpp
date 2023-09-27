#include <iostream>

int main(void) {
  std::string str;
  
  std::cin >> str;

  for (int i = str.size() - 1; i >= 0; i--) {
    std::cout << str.at(i);
  }

  std::cout << std::endl;
   
  return 0;
}