#include <iostream>

using namespace std;

typedef unsigned int uint32;

uint32 gcd(uint32 x, uint32 y) {
  uint32 r = 0;
  uint32 a = 0;
  if (x >= y) {
    r = x % y;
    a = y;
  } else {
    r = y % x;
    a = x;
  }

  if (r == 0) {
    return a;
  }
  return gcd(a, r);
}

int main() {
  uint32 x, y;
  cin >> x >> y;
  cout << gcd(x, y) << endl;
  return 0;
}