#include <cstdio>

int main() {
  int a,b,c,d,e,f;
  while(scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f) != EOF) {
    double x,y;
    y = (c*d - a*f)*1.0/(b*d - a*e);
    x = (c - b*y)/a;
    printf("%.3lf %.3lf\n", x, y);
  }
  return 0;
  
}