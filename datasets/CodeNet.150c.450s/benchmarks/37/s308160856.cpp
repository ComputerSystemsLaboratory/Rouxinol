#include<iostream>
#include<cstdio>

double zc(double n){
        if(-0.000000001<n&&n<=0) return 0;
        else return n;
}

signed main(){
        double a,b,c,d,e,f;
        while( scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f) != EOF ){
                double x = 1/(a*e-b*d)*(c*e-b*f);
                double y = 1/(a*e-b*d)*(a*f-c*d);
                printf("%.3f %.3f\n",zc(x),zc(y));
        }
        return 0;
}