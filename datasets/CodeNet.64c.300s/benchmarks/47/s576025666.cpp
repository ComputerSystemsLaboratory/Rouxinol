#include <iostream>
using namespace std;

int main() {
  int n;
  int a[100] = {};
  while (cin >> n) a[n - 1]++;

  int maxa = 0;
  while (true) {
    int maxb = maxa;
    maxa = 0;

    int max_val = 0;
    for (int i = 0; i < 100; i++) {
      if (a[i] > maxa) {
        maxa = a[i];
        max_val = i + 1;
      }
    }
    if (maxa < maxb) break;

    cout << max_val << endl;
    a[max_val - 1] = 0;
  }

  return 0;
}
