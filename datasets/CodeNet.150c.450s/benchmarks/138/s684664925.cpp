#include <iostream>
#include <cassert>
#include <algorithm>

using namespace std;

uint32_t gcd(const uint32_t &a, const uint32_t &b) {
  uint32_t x = a;
  uint32_t y = b;

  if (y > x) {
    swap(x, y);
  }

  while (x >= y && y != 0) {
    uint32_t tmp = y;
    y = x % y;
    x = tmp;
  }

  return x;
}

int main(int argc, char *argv[]) {
  uint32_t a, b;

  cin >> a >> b;

  cout << gcd(a, b) << endl;

  return 0;
}