#include <iostream>
using namespace std;

int main() {
  int a, b;
  while (true) {
    cin >> a >> b;
    if (a == 0 && b == 0) return 0;
    if (a < b) cout << a << ' ' << b << endl;
    else cout << b << ' ' << a << endl;
  }
}