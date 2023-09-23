#include <stdio.h>

int main() {
  
  int a,b,c,d,e,f;
  float x,y;

  while(scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f)!=EOF) {
    x=(double)(c*e-b*f)/(double)(a*e-b*d);
    y=(double)(a*f-c*d)/(double)(a*e-b*d);
    if(x==-0) x=0;
    if(y==-0) y=0;
    printf("%.3f %.3f\n",x,y);
  }
  
  return 0;
}