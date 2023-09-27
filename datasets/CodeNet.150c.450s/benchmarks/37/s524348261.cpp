#include <stdio.h>
#include <math.h>

using namespace std;


int main(){
    double a,b,c,d,e,f,x,y;

    while(scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f)!=EOF){
        x=(c*e-b*f)/(a*e-d*b);
        y=(c*d-a*f)/(b*d-a*e);
        if(x == 0)x=0;
        if(y == 0)y=0;
        printf("%.3lf %.3lf\n",x,y);
    }

    return 0;
}
