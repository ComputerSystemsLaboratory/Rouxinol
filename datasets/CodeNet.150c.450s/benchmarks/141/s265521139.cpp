#include <complex>
#include <cmath>
#include <vector>
#include <cstdio>
#include <iostream>
using namespace std;

typedef complex<double> xy_t;

double dot_product(xy_t a, xy_t b) { return (conj(a)*b).real(); }
double cross_product(xy_t a, xy_t b) { return (conj(a)*b).imag(); }
xy_t projection(xy_t p, xy_t b) { return b*dot_product(p,b)/norm(b); }

int main(){
  double x[4], y[4];
  double pab, pbc, pca;
  while(true){
    for(int i=0; i<4; ++i){
      cin >> x[i] >> y[i];
    }
    if(!cin) break;
    xy_t a(x[0],y[0]), b(x[1],y[1]), c(x[2],y[2]), p(x[3],y[3]);
    pab = cross_product(a-p,b-p) / 2;
    pbc = cross_product(b-p,c-p) / 2;
    pca = cross_product(c-p,a-p) / 2;
    bool ok = ((pab>0) && (pbc>0) && (pca>0)) || ((pab<0) && (pbc<0) && (pca<0));
    cout << (ok ? "YES" : "NO") << endl;
  }
}