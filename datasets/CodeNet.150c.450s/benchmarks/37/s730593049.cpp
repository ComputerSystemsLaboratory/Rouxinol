#include <iostream>
#include <cstdio>
using namespace std;

int main() {
  double a,b,c,d,e,f;
  while(cin >>a>>b>>c>>d>>e>>f) {
    double x=(c*e-b*f)/(a*e-b*d);
    double y=(c*d-a*f)/(b*d-a*e);
    if (-0.0001<x&&x<0.0001) x=0;
    if (-0.0001<y&&y<0.0001) y=0;
    printf("%.3f %.3f\n", x, y);
  }
}