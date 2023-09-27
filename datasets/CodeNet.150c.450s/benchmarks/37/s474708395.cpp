#include<iostream>
#include<cstdio>
#include<vector>
#include<cstring>
using namespace std;

#define REP(i,n) for(int i=0;i<(int)(n);++i)

int main() {
  for(;;) {
    double a, b, c, d, e, f;
    if( !(cin >> a >> b >> c >> d >> e >> f) )break;
    double det = 1.0 / (a * e -b * d);
    double x = det * (e * c - b * f);
    double y = det * (-d * c + a * f);
    double EPS = 1e-8;
    char buf[128];
    sprintf(buf, "%.4f", x + EPS);
    buf[ strlen(buf) - 1 ] = ' ';
    printf(buf);
    sprintf(buf, "%.4f", y + EPS);
    buf[ strlen(buf) - 1 ] = '\n';
    printf(buf);
  }
  return 0;
}