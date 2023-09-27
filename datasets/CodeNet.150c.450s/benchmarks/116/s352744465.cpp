#include <iostream>

using namespace std;

int main() {
  while (1) {
    int k, n;
    cin >> n >> k;
    if ((k <= n) && (n == 0)) {
      return 0;
    }

    long a[100000];
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    int s = 0;
    for (int i = 0; i < k; i++) {
      s += a[i];
    }
    int m = s;
    for (int i = 0; i + k < n; i++) {
      int t = s + a[k + i] - a[i];
      if (t >= m) {
        m = t;
      }
      s = t;
    }
    cout << m << endl;
  }
  return 0;
}