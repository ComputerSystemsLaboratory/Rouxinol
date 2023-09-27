#include <cstdio>

int main(){
    double a,b,c,d,e,f;
    while(scanf("%lf %lf %lf %lf %lf %lf",&a, &b, &c, &d, &e, &f)!=EOF){
        double D = a*e-b*d;
        double x = (e*c-b*f)/D;
        double y = (a*f-c*d)/D;
        if(x==0)
            x = 0;
        if(y==0)
            y = 0;
        printf("%.3f %.3f\n", x, y);
    }
    return 0;
}