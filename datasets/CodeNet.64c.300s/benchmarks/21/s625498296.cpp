#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

int main(void){
    double a,b,c,d,e,f,x,y;
    while(cin>>a>>b>>c>>d>>e>>f){
        y=(a*f-d*c)/(a*e-b*d);
        x=(c-b*y)/a;
        y=double(round(y*1000))/1000.0;
        x=double(round(x*1000))/1000.0;
        printf("%.3lf %.3lf\n", x, y);
    }
    return 0;
}