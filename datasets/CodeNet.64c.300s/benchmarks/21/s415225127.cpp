#include <stdio.h>
#include <math.h>

double round_at(double n,int dig){
    return ((int)(round(n*pow(10,dig))))/pow(10,dig);
}

int main(){
    double a,b,c,d,e,f,x,y;
    while(scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f)!=EOF){
        x = (c*e-b*f)/(a*e-b*d);
        y = (a*f-c*d)/(a*e-b*d);
        x = round_at(x,3);
        y = round_at(y,3);
        printf("%.3lf %.3lf\n",x,y);
    }
}