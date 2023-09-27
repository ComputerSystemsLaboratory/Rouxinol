#include <cstdio>

float x1,y1,x2,y2,x3,y3,xp,yp;
float X1,Y1,X2,Y2,XP,YP;
float d,s,t;

int main(){
  while(~scanf("%f%f%f%f%f%f%f%f",&x1,&y1,&x2,&y2,&x3,&y3,&xp,&yp)){
    X1=x2-x1;
    Y1=y2-y1;
    X2=x3-x1;
    Y2=y3-y1;
    XP=xp-x1;
    YP=yp-y1;
    d=X1*Y2-X2*Y1;
    t=(XP*Y2-X2*YP)/d;
    s=(-XP*Y1+X1*YP)/d;
    if(0<t&&t<1&&0<s&&s<1&&s+t<1){
      puts("YES");
    }else{
      puts("NO");
    }
  }
}