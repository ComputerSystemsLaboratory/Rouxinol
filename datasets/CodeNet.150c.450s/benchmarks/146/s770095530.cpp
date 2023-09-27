#if 0

#endif

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef complex<double> xy_t;
const double EPS = 1e-11;

double dot_product(xy_t a, xy_t b) {
  return (conj(a)*b).real();
}
double cross_product(xy_t a, xy_t b) {
  return (conj(a)*b).imag();
}
xy_t projection(xy_t p, xy_t b) {
  return b*dot_product(p,b)/norm(b);
}

double x[4], y[4];
int N;
int main() {
  cin >> N;
  for (int t=0; t<N; ++t) {
    for (int i=0; i<4; ++i)
      cin >> x[i] >> y[i];
      xy_t a[2] = {
        xy_t(x[0],y[0]) - xy_t(x[1],y[1]),
        xy_t(x[2],y[2]) - xy_t(x[3],y[3])
      };
      bool p = abs(cross_product(a[0], a[1])/2.0) < EPS;
      cout << (p ? "YES" : "NO") << endl;
  }
}

