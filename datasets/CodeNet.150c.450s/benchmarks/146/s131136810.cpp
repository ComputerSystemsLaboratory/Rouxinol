#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9 + 10;
const double eps = 1e-11;
double cross_product(complex<double> a, complex<double> b) {
  return (conj(a) * b).imag();
}

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    vector<double> x(4), y(4);
    for (int j = 0; j < 4; j++) {
      cin >> x[j] >> y[j];
    }
    complex<double> vec1 = complex<double>{x[1] - x[0], y[1] - y[0]};
    complex<double> vec2 = complex<double>{x[3] - x[2], y[3] - y[2]};
    cout << ((abs(cross_product(vec1, vec2)) < eps) ? "YES" : "NO") << endl;
  }
}

