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

xy_t A[4];
double re,im;
double S[3];

int main() {
  while(true) {
    for (int i=0;i<4;i++) {
      if (scanf("%lf%lf",&re,&im) == EOF) {
	goto STOP;
      }
      xy_t P(re,im);
      A[i] = P;
    }
    for (int i=0;i<3;i++) {
      S[i] = cross_product(A[i%3]-A[3],A[(i+1)%3]-A[3]);
    }
    if ((S[0] > 0 && S[1] > 0 && S[2] > 0) || (S[0] < 0 && S[1] < 0 && S[2] < 0)) {
      printf("YES\n");
    } else {
      printf("NO\n");
    }
  }
 STOP: return 0;
}