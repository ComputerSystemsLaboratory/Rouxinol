#include<stdio.h>

int main(){
  int a, b, c, d, e, f;
  while(scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f) != EOF){
    double ans1 = (double)(e*c-b*f)/(double)(a*e-b*d);
    double ans2 = (double)(-d*c+a*f)/(double)(a*e-b*d);
    if (ans1 == 0) ans1 = 0;
    if (ans2 == 0) ans2 = 0;
    printf("%.3lf %.3lf\n", ans1, ans2);
  }
  return 0;
}