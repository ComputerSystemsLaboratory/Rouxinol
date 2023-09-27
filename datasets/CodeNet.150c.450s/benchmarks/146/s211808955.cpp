#include <complex>
#include <cmath>
#include <iostream>
#include <stdio.h>

using namespace std;
typedef complex<double> xy_t;

const double eps= 0.000000000001;
double x[4], y[4];
int N;
int main(){
  cin >> N;
  for(int t= 0; t<N; ++t){
    for (int i = 0; i < 4; ++i) cin >> x[i] >> y[i];
    xy_t a[2]={xy_t(x[0],y[0])-xy_t(x[1],y[1]), xy_t(x[2],y[2])-xy_t(x[3],y[3])};
    xy_t x=a[0],y=a[1];
    bool p = abs(x.real()*y.imag()-x.imag()*y.real()) < eps;
    cout << ( p ? "YES" : "NO" ) << endl ;
  }

}