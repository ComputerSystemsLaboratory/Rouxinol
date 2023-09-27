#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;
int main(){
    double a,b,c,d,e,f;
    while(cin >> a >>b >> c >> d >> e >> f){
    double det,x,y;
    det = a*e-b*d;
    x = (e*c-b*f)/det;
    y = (-c*d+a*f)/det;
    if (x==0)
        x = fabs(x);
    if (y==0)
        y = fabs(y);
    printf("%.3f %.3f\n",x,y);}
}