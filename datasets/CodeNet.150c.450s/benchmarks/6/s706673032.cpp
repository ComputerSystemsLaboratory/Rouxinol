#include <iostream>
#include <string>

int main() {
  int a, b, c;
  std::cin >> a >> b >> c;

  std::string result = "No";
  if (a < b && b < c) {
    result = "Yes";
  }

  std::cout << result << std::endl;
}
