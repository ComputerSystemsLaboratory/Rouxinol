#include <iostream>

using namespace std;

int main() {
  for (;;) {
    int n, pa = 0, pb = 0;
    cin >> n;
    if (!n) return 0;
    for (int i = 0; i < n; i++) {
      int a, b;
      cin >> a >> b;
      if (a == b) {
        pa += a;
        pb += b;
      } else
        (a > b ? pa : pb) += a + b;
    }
    cout << pa << ' ' << pb << endl;
  }
}