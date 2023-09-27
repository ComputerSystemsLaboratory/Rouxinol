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

const double eps = 1e-11;
// (|a|+|b|+|c|+|d|)*epsilon??¨(10-5)^2???????????°

int main(){
  int n;
  cin >> n;
  for(int i=0; i<n; ++i){
    xy_t P[4];
    double x, y;
    for(int j=0; j<4; ++j){
      cin >> x >> y;
      P[j] = xy_t(x, y);
    }
    bool p = abs(cross_product(P[1]-P[0], P[3]-P[2])) < eps;
    cout << (p ? "YES" : "NO") << endl;
  }
}