#include <iostream>
using namespace std;

void p(int a[], int n) {
  int i;
  for (i = 0; i < n; i++) {
    cout << a[i];
    if (i != n - 1) {
      cout << ' ';
    }
  }
  cout << endl;
}

int main() {
  int a[100], n, i, j, k, t;

  cin >> n;
  for (i = 0; i < n; i++) {
    cin >> a[i];
  }

  p(a, n);

  for (i = 1; i < n; i++) {
    k = a[i];
    j = i - 1;
    while (j >= 0 && a[j] > k) {
      a[j + 1] = a[j];
      j--;
    }
    a[j + 1] = k;

    p(a, n);
  }

  return 0;
}