#include <algorithm>
#include <iostream>
#include <string>

int main() {
  std::string str ;
  std::cin >> str; 
  std::reverse(str.begin(), str.end());
  std::cout << str << std::endl;
}

