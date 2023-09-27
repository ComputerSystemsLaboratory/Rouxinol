#include <stdio.h>
int main(){
    double a,b,c,d,e,f,x,y;
    while(scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f)!=EOF){
        x=(b*f-c*e)/(b*d-a*e);
        y=(c*d-f*a)/(b*d-a*e);
        if(x==-0)x=0;
        if(y==-0)y=0;
        printf("%.3lf %.3lf\n",x,y);
    }
}