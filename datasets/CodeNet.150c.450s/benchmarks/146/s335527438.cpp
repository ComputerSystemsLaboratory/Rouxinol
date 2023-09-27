#include <complex>
#include <cmath>
#include <iostream>
using namespace std;
typedef complex<double> xy_t;

double dot_product(xy_t a,xy_t b) {
  return (conj(a)*b).real();
}

double cross_product(xy_t a, xy_t b) {
  return (conj(a)*b).imag();
}

xy_t projection(xy_t p,xy_t b) {
  return b * dot_product(p,b)/norm(b);
}

int N;
xy_t A[4];
double S;
const double eps = 1e-11;

int main() {
  scanf("%d",&N);
  for (int n=0;n<N;n++) {
    double re,im;
    for (int i=0;i<4;i++) {
      scanf("%lf%lf",&re,&im);
      xy_t P(re,im); // カッコ悪い記述だが仕方ない。
      A[i] = P;
    }
    A[1] -= A[0];
    A[3] -= A[2];
    S = cross_product(A[1],A[3]);
    bool p = abs(S) < eps;
    printf(p ? "YES\n" : "NO\n");
  }
}