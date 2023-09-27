#include <iostream>
#include <complex.h>
#include <math.h>
using namespace std;

const double eps = pow(10, -11);
double x[4], y[4];
int N;
typedef complex<double> xy_t;

double cross_product(xy_t a, xy_t b) { return (conj(a)*b).imag();}
int main() {
  cin >> N; //問題数
  for (int t=0; t<N; ++t) {
    for (int i=0; i<4; ++i)
	  cin >> x[i] >> y[i]; //x0,y0..x3,y3
	xy_t a[2] = {
	  xy_t(x[0], y[0]) - xy_t(x[1],y[1]),
	  xy_t(x[2], y[2]) - xy_t(x[3],y[3])
	  };
	  double s = cross_product(a[0] , a[1])/2;
	  bool p = abs(s) < eps;
	  cout << (p ? "YES" : "NO") << endl;
	  }
	 }