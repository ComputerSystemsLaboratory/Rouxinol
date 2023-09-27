#include <iostream>

int Gcd(int smaller, int bigger) {
  if (smaller > bigger) {
    return Gcd(bigger, smaller);
  }
  if (smaller <= 0) {
    return bigger;
  }

  auto r = bigger % smaller;
  return Gcd(r, smaller);
}

int main(void) {
  int x, y;
  std::cin >> x >> y;
  std::cout << Gcd(x, y) << '\n';
}