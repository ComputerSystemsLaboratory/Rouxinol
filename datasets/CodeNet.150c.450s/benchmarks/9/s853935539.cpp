#include <iostream>
#include <string>

template <class X>
X cinas() {
  X in;
  std::cin >> in;
  return in;
}

int main() {
  std::string text;
  while (std::cin >> text) {
    if (text == "-") break;

    int m = cinas<int>();
    int total = 0;
    for (int i = 0; i < m; i++) {
      total += cinas<int>();
    }

    int movedPos = total % text.length();
    for (int i = movedPos; i < movedPos + text.length(); i++) {
      std::cout << text[i % text.length()];
    }
    std::cout << std::endl;
  }
  return 0;
}

