#include<bits/stdc++.h>
using namespace std;

double Round4(double r){
    //double s=r;
    r=(int)round(r*1000);
    r=(double)r/1000;
    return(r);
}

int main(){
    double a,b,c,d,e,f;
    double x,y;
    while(cin>>a>>b>>c>>d>>e>>f){
        x=Round4((c*e-f*b)/(a*e-d*b));
        y=Round4((c*d-f*a)/(b*d-e*a));
        printf("%.3f %.3f\n", x, y);
    }
    return(0);
}