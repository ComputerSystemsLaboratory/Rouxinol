#include <iostream>
#include <cmath>
using namespace std;

int main() {
  std::cin.tie(0);
  std::ios::sync_with_stdio(false);

  int a, b;
  while (true) {
    cin >> a;
    cin >> b;
    if (cin.eof()) { break; }
    cout << floor(log10(a + b)) + 1 << endl;
  }

  return 0;
}