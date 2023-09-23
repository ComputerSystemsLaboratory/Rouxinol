#include <iostream>
using namespace std;
int main() {
  bool f;
  int n, i, a, b, c;
  cin >> n;
  while (n--) {
    for (i = b = c = f = 0; i < 10; i++) {
      cin >> a;
      if (a > b) {
        b = a;
      } else if (a > c) {
        c = a;
      } else {
        f = 1;
      }
    }
    if (f)
      cout << "NO" << endl;
    else
      cout << "YES" << endl;
  }
  return 0;
}