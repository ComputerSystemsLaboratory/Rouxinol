#include<stdio.h>
#include<math.h>
int main(void){
    double a,b,c,d,e,f,A,x,y,X,Y,Z;
 
    while(scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f)!=EOF){
 
 
    Y=a*e-b*d,Z=f*a-c*d;
    y=Z/Y;
 
    x=(c-b*y)/a;
 
   printf("%.3lf %.3lf\n",x,y);
    }
 
    return 0;
}