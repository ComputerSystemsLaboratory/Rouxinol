#include <iostream>
using namespace std;
int main() {
  int x;
  int h = 0, m = 0, s = 0;
  cin >> x;
  while (x >= 60 * 60) {
    h += 1;
    x -= 60 * 60;
  }
  while (x >= 60) {
    m += 1;
    x -= 60;
  }
  cout << h << ":" << m << ":" << x << endl;
  return 0;
}