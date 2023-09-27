#include <iostream>
#include <cstdio>

using namespace std;

static int FindGCD(int x, int y) {
  int a = 0;
  int b = 0;
  if (x >= y) {
    a = y;
    b = x % y;
  } else {
    a = x;
    b = y % x;
  }

  while (b) {
    const int r = a % b;
    a = b;
    b = r;
  }
  return a;
}

int main() {
  int x, y;
  cin >> x >> y;
  cout << FindGCD(x, y) << endl;
  return 0;
}