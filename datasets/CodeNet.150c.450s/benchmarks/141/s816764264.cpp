#include <complex>
#include <cmath>
#include <iostream>
using namespace std;
typedef complex<double> xy_t;
double x[4],y[4];
string ok;

double cross_product(xy_t a,xy_t b) {
  return (conj(a)*b).imag()/2.0;
}

int main () {
  while (true) {
    for (int i=0; i<4; ++i) {
      cin >> x[i] >> y[i];
    }
    if (!cin) break;
    xy_t a(x[0],y[0]), b(x[1],y[1]), c(x[2],y[2]),p(x[3], y[3]);
    double pab = cross_product(a-p,b-p);
    double pbc = cross_product(b-p,c-p);
    double pca = cross_product(c-p,a-p);
    if ((pab>0&&pbc>0&&pca>0)||(pab<0&&pbc<0&&pca<0)) {
      ok = "YES";
    }
    else {
      ok = "NO";
    }
    cout << ok << endl;
  }
}