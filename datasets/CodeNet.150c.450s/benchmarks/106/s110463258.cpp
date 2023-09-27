#include <iostream>

using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  int d = 0;
  for (int n = a; n <= b; ++n) {
    if (c % n == 0)
      d++;
  }
  cout << d << endl;
  return 0;
}