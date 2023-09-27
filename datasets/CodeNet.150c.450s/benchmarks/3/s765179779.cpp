#include <iostream>
#include <string>

void replace(std::string& str, int& a, int& b, std::string& p) {
  for (int i = 0; i < p.size(); i++) {
    str[i + a] = p[i];
  }
}

void reverse(std::string& str, int& a, int& b) {
  std::string buf = str.substr(a, b - a + 1);
  for (int i = 0; i < buf.size(); i++) {
    str[i + a] = buf[buf.size() - 1 - i];
  }
}

void print(std::string& str, int& a, int& b) {
  for (int i = a; i <= b; i++) {
    std::cout << str[i];
  }
  std::cout << std::endl;
}

int main() {
  std::string str;
  std::cin >> str;
  int q;
  std::cin >> q;

  while (q-- != 0) {
    std::string command, p;
    int a, b;
    std::cin >> command;
    std::cin >> a >> b;

    if (command == "replace") {
      std::cin >> p;
      replace(str, a, b, p);
    } else if (command == "reverse") {
      reverse(str, a, b);
    } else if (command == "print") {
      print(str, a, b);
    }
  }
  return 0;
}

