#include <iostream>
using namespace std;
int f(int x) {
  return x * x;
}
int main() {
  int d, i, r;
  while (cin >> d) {
    for (i = r = 0; i < (600 / d); i++) {
      r += f(d * i) * d;
    }
    cout << r << endl;
  }
  return 0;
}