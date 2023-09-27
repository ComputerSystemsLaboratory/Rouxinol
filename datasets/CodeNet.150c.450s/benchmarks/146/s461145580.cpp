//Lin Gengxian Shunji
// Parallelism 08-144505
// Not sure if it is correct, the online judge has no test cases

#include <complex>
#include <cmath>
#include <iostream>
#include <cstdio>

using namespace std;

typedef complex<double> xy_t;

double dot_product(xy_t a, xy_t b) {
  return (conj(a)*b).real();
}

double cross_product(xy_t a, xy_t b) {
  return (conj(a)*b).imag();
}

double e = 1e-11;

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    double x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    xy_t A = xy_t(x2 - x1, y2 - y1);
    xy_t B = xy_t(x4 - x3, y4 - y3);

    double dot_prod =  abs(dot_product(A, B));
    double AB_magnitude = abs(A) * abs(B);
    
    if (dot_prod <= AB_magnitude + e && dot_prod >= AB_magnitude - e) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
}