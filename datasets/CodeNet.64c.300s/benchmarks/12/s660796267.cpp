#include <iostream>

using namespace std;

int main() {
  int i = 2, x, y;
  cin >> x;
  for (y = x; i > 0; i--)
    y *= x;
  cout << y << endl;
  return 0;
}