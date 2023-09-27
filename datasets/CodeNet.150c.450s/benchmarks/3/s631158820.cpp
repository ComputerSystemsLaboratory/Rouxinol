#include <iostream>
#include <string>

int main() {
  std::string str;
  std::cin >> str;

  int n;
  std::cin >> n;

  std::string command;
  int a, b;
  for(int i = 0; i < n; ++i) {
    std::cin >> command >> a >> b;
    if(command == "replace") {
      std::string rep;
      std::cin >> rep;
      str.replace(a, b - a + 1, rep);
    }
    else if(command == "reverse") {
      std::string rev(str.substr(a, b - a + 1));
      for(int j = 0; j < b - a + 1; ++j) {
        str[a + j] = rev[b - a - j];
      }
    }
    else if(command == "print") {
      std::cout << str.substr(a, b - a + 1) << std::endl;
    }
  }

  return 0;
}