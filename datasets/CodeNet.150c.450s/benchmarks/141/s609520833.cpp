#include <cstdio>
#include <iostream>
#include <complex>
#define rep(i,n) for(int i=0; i<(n); i++)
#define EPS 1e-10
using namespace std;

typedef complex<double> cd;

double s(cd a, cd b){
  return abs( a.real()*b.imag()-a.imag()*b.real() );
}

int main(){
  cd a[4];
  double x1, y1, x2, y2, x3, y3, xp, yp;

  while(scanf("%lf%lf%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3, &xp, &yp)!=EOF){
    a[0] = cd(x1,y1);
    a[1] = cd(x2,y2);
    a[2] = cd(x3,y3);
    a[3] = cd(xp,yp);
    if(abs(s(a[0]-a[3], a[1]-a[3])
           + s(a[1]-a[3], a[2]-a[3])
           + s(a[2]-a[3], a[0]-a[3])
           - s(a[1]-a[0], a[2]-a[0])) < EPS )
      printf("YES\n");
    else
      printf("NO\n");
  }
  
  return 0;
}