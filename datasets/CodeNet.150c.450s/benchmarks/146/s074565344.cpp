#include <stdio.h>

int main(){
  int n;
  scanf("%d", &n);

  for(int i=0;i<n;i++){
    double x1, y1, x2, y2, x3, y3, x4, y4;
    scanf("%lf%lf%lf%lf%lf%lf%lf%lf", &x1,&y1,&x2,&y2,&x3, &y3,&x4, &y4);

    double ab = (y1-y2)/(x1-x2);
    double cd = (y3-y4)/(x3-x4);

    printf("%s\n", (ab==cd)? "YES":"NO");
  }
  return 0;
}