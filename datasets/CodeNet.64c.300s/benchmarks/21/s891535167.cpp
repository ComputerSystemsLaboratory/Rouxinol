#include<stdio.h>
int main(){
    double a,b,c,d,e,f,bb,cc,ee,ff,x,y;
    for(;;){
        if(scanf("%lf",&a)==EOF){break;}
        scanf("%lf",&b);
        scanf("%lf",&c);
        scanf("%lf",&d);
        scanf("%lf",&e);
        scanf("%lf",&f);
        bb=b*d;
        cc=c*d;
        ee=e*a;
        ff=f*a;
        y=(cc-ff)/(bb-ee);
        x=(c-b*y)/a;
        printf("%.3lf %.3lf\n",x,y);
    }
    return 0;
}