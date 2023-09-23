#include<iostream>
#include<stdio.h>
#include<math.h>
#include    <iomanip>
using namespace std;

int main(){

    double a,b,c,d,e,f,y,x,bb,cc,dd,ee,ff;
    while(scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f) != EOF){
        y=(c*d-a*f)/(b*d-a*e);
        x=(c-b*y)/a;
        x+=0.0004;
        y+=0.0004;
        printf("%.3lf %.3lf\n",x,y);
    
        /*
        y=round(1000*y);
        y=(int)y;
        y=y/1000+0.0;
        
        x=round(1000*x);
        x=(int)x;
        x=x/1000+0.0;
        cout<<fixed<<setprecision( 3 )<<x<<" "<<y<<endl;*/
        //printf("%f %f\n",x,y);
    }
    return 0;
}