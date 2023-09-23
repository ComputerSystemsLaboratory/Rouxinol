#include <iostream>
#include <algorithm>
using namespace std;
int main () {
  int n;
  cin >> n;
  long *a = new long[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  long x, y, z;
  x = a[0];
  y = a[0];
  z = 0;
  for (int j = 0; j < n; j++) {
    x = min(x, a[j]);
    y = max(y, a[j]);
    z += a[j];
  }
  cout << x << " " << y << " " << z <<endl;
  delete[] a;
}