#include<iostream>
#include<complex>
#include<queue>
using namespace std;
typedef complex<double> xy_t;
double cross_product(xy_t p,xy_t q)
{
  return (conj(p)*q).imag();
}
int main()
{
  double x[4],y[4];
  while(true){
    for( int i = 0; i < 4; ++i) cin >> x[i] >> y[i];
    if(!cin) break;
    xy_t a(x[0],y[0]),b(x[1],y[1]),c(x[2],y[2]),p(x[3],y[3]);
    double S1,S2,S3;
    S1 = cross_product(a - p, b - p);
    S2 = cross_product(b - p, c - p);
    S3 = cross_product(c - p, a - p);
    bool ok = (S1 > 0 && S2 > 0 && S3 > 0) || (S1 < 0 && S2 < 0 && S3 < 0);
    cout << (ok ? "YES":"NO") << endl;
  }
}