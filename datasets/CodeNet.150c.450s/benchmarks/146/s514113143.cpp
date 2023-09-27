#include <iostream>

#define EPS (1e-10)

using namespace std;

double a[2], b[2], c[2], d[2];

bool isParallel() {
  double ax = b[0] - a[0], ay = b[1] - a[1];
  double bx = d[0] - c[0], by = d[1] - c[1];
  double cross = ax * by - ay * bx;
  if (-EPS < cross && EPS > cross)
    return true;
  else
    return false;
}

int main() {
  int n;
  cin >> n;
  if (n < 1) return -1;
  for (int i = 0; i < n; i++) {
    cin >> a[0] >> a[1] >> b[0] >> b[1] >> c[0] >> c[1] >> d[0] >> d[1];
    if (isParallel()) cout << "YES\n";
    else cout << "NO\n";
  }
  return 0;
}