#include <stdio.h>

int main(void) {
  double x1, y1, x2, y2, x3, y3, xp, yp;
  while(scanf("%lf%lf%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3, &xp, &yp) != EOF) {
    double st, tt, ut;
    int s, t, u;
    x1 -= xp, x2 -= xp, x3 -= xp;
    y1 -= yp, y2 -= yp, y3 -= yp;
    //printf("%f %f %f %f %f %f\n", x1, y1, x2, y2, x3, y3);
    st = x1 * y2 - x2 * y1;
    if(!st) {
      printf("NO\n");
      continue;
    }
    s = st < 0 ? 0 : 1;
    tt = x2 * y3 - x3 * y2;
    if(!tt) {
      printf("NO\n");
      continue;
    }
    t = tt < 0 ? 0 : 1;
    ut = x3 * y1 - x1 * y3;
    if(!ut) {
      printf("NO\n");
      continue;
    }
    u = ut < 0 ? 0 : 1;
    //printf("%d %d %d\n", s, t, u);
    if(s == t && t == u) printf("YES\n");
    else printf("NO\n");
  }
  return 0;
}
