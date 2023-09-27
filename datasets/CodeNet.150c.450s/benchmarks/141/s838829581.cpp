#include <stdio.h>

int main(void) {

  double x1,y1,x2,y2,x3,y3,xp,yp;

  while(scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3,&xp,&yp)!=EOF) {

    double s,t;

    s=(double)((y3-y1)*(xp-x1)-(x3-x1)*(yp-y1))/(double)((x2-x1)*(y3-y1)-(x3-x1)*(y2-y1));

    t=(double)((x2-x1)*(yp-y1)-(xp-x1)*(y2-y1))/(double)((x2-x1)*(y3-y1)-(x3-x1)*(y2-y1));

    if(s>0 && t>0 && s+t<1) {
      //printf("%lf %lf",s,t);
      printf("YES\n");

    } else {
      //printf("%lf %lf",s,t);      
      printf("NO\n");

    }
       
  }
   
  return 0;

}