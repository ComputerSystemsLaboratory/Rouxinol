#include <iostream>

int main() {

  int a,b,c;

  std::cin >> a >> b >> c;

  int d = 0;

  for (int x = a; x <= b; x++) {
    if (c % x == 0) {
      d++;
    }
  }

  std::cout << d << '\n';

  return 0;
}

