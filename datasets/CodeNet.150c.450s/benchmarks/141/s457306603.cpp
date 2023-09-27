#include <cstdio>
#include <algorithm>
#include <complex>
using namespace std;

int main() {
  for(int tci = 0; ; tci++) {
    double x1,y1,x2,y2,x3,y3,xp,yp;
    if(scanf("%lf%lf%lf%lf%lf%lf%lf%lf", &x1,&y1,&x2,&y2,&x3,&y3,&xp,&yp)<8) break;
    complex<double> ps[3];
    ps[0] = complex<double>(x1,y1);
    ps[1] = complex<double>(x2,y2);
    ps[2] = complex<double>(x3,y3);
    complex<double> pp(xp,yp);
    bool ok = true;
    for(int i = 0; i < 3; i++) {
      complex<double> v0 = ps[(i+1)%3]-ps[i];
      complex<double> v1 = ps[(i+2)%3]-ps[i];
      complex<double> vp = pp-ps[i];
      double det1 = (v0*conj(v1)).imag();
      double det2 = (v0*conj(vp)).imag();
      ok = ok & (det1 * det2 > 1e-9);
    }
    printf("%s\n", ok ? "YES" : "NO");
  }
  return 0;
}