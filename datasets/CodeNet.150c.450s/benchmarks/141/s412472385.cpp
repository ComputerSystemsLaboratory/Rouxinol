#include <stdio.h>

int main(void)
{
  double x1,y1,x2,y2,x3,y3,xp,yp;
  double a,b,c;
  
  while(scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3, &xp, &yp)!=EOF){
  
    a = (x1-xp)*(y2-yp)-(x2-xp)*(y1-yp);
    b = (x2-xp)*(y3-yp)-(x3-xp)*(y2-yp);
    c = (x3-xp)*(y1-yp)-(x1-xp)*(y3-yp);
  
  
    if( (a>0&&b>0&&c>0) || (a<0&&b<0&&c<0) ){
      printf("YES\n");
    }else{
      printf("NO\n");
    }
  }
  return 0;
  
}