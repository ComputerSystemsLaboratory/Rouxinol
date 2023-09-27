#include <iostream>
#include <string>

int main() {
  std::string s;
  std::string p;
  std::cin >> s;
  std::cin >> p;

  std::string s2 = s + s;

  if (s2.find(p) != std::string::npos) {
    std::cout << "Yes" << std::endl;
  } else {
    std::cout << "No" << std::endl;
  }
  return 0;
}