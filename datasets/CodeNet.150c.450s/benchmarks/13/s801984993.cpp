#include <iostream>
#include <string>

int main() {
  std::string s, p;
  std::cin >> s >> p;
  std::string ss = s + s;
  if (ss.find(p) != std::string::npos) {
    std::cout << "Yes" << std::endl;
  } else {
    std::cout << "No" << std::endl;
  }
  return 0;
}

