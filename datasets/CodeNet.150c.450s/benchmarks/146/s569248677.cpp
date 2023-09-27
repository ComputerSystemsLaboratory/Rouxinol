#include <iostream>
#include <complex>
#include <cmath>
using namespace std;
int main() {
  int n;
  cin >> n;
  while (n--) {
    complex<double> p[4];
    for (int i = 0; i < 4; ++i) {
      double x, y;
      cin >> x >> y;
      p[i] = complex<double>(x, y);
    }
    complex<double> v1 = p[1] - p[0], v2 = p[3] - p[2];
    double a = abs(v1.real() * v2.imag() - v1.imag() * v2.real());
    cout << ((a < 1e-10) ? "YES" : "NO") << endl;
  }
}