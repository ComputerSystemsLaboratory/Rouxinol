#include <iostream>

using namespace std;

static int FindGCD(int x, int y) {
  int a = x;
  int b = y;
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