#include <iostream>
using namespace std;
int main() {
  int a[100] = {}, m, i, n;
  while (cin >> n) {
    a[n - 1]++;
  }
  for (i = m = 0; i < 100; i++) {
    if (a[i] > m) {
      m = a[i];
    }
  }
  for (i = 0; i < 100; i++) {
    if (a[i] == m) {
      cout << i + 1 << endl;
    }
  }
  return 0;
}