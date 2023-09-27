#include <iostream>

using namespace std;

int main() {
  int n;
  while (cin >> n && n != 0) {
    int *a = new int[n];
    int max, t;
    for (int i = 0; i < n; i++) {
      cin >> t;
      a[i] = t;
    }
    max = -1000000;
    for (int j = 0; j < n; j++) {
      for (int k = j, t = 0; k < n; k++) {
        t += a[k];
        if (max < t) max = t;
      }
    }
    delete [] a;
    cout << max << endl;
  }
  return 0;
}