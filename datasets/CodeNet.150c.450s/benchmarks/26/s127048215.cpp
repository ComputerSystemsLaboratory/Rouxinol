#include <iostream>
#include <string>

int main() {
  int a, b;
  std::cin >> a >> b;

  std::string cmp = "==";
  if (a > b) {
    cmp = ">";
  } else if (a < b) {
    cmp = "<";
  }

  std::cout << "a " << cmp << " b" << std::endl;
}
