#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
    double a,b,c,d,p,q;
    while(cin>>a>>b>>p>>c>>d>>q){
        double x=(b*q-d*p)/(b*c-a*d);
        double y=(a*q-c*p)/(a*d-b*c);
        if(x<=0.0&&x>-0.00001)x=0.0;
        if(y<=0.0&&y>-0.00001)y=0.0;
        printf("%.3f %.3f\n",x,y);
    }

    return 0;
}