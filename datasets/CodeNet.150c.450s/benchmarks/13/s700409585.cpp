#include <iostream>
#include <string>

int main() {
  std::string str;
  std::string key;

  std::getline(std::cin, str);
  std::getline(std::cin, key);

  str += str;

  bool iskey = false;
  if(str.find(key) != std::string::npos) iskey = true;

  if(iskey) {
    std::cout << "Yes" << std::endl;
  }
  else {
    std::cout << "No" << std::endl;
  }

  return 0;
}