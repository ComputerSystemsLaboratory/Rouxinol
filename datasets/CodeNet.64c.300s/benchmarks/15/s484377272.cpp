#include <iostream>
using namespace std;

int main() {
  int a[100], n, i, j, m, t, c, f;

  cin >> n;
  for (i = 0; i < n; i++) {
    cin >> a[i];
  }

  c = 0;
  for (i = 0; i < n; i++) {
    m = i;
    f = 0;
    for (j = i; j < n; j++) {
      if (a[m] > a[j]) {
        m = j;
        f = 1;
      }
    }

    t = a[i];
    a[i] = a[m];
    a[m] = t;

    if (f) {
      c++;
    }
  }

  for (i = 0; i < n; i++) {
    cout << a[i];
    if (i != n - 1) {
      cout << ' ';
    }
  }

  cout << endl << c << endl;

  return 0;
}