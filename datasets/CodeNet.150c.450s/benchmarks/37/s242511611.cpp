#include <math.h>
#include <stdio.h>

int main(void){
    double a,b,c,d,e,f;
    double x,y,det;
    
    while (scanf("%lf", &a) != EOF){
        scanf("%lf %lf %lf %lf %lf", &b, &c, &d, &e, &f);
        det = a*e - b*d;
        x = (e*c - b*f) / det;
        y = (-d*c + a*f) / det;
        
        x = floor(x*1000 + 0.5) / 1000;
        y = floor(y*1000 + 0.5) / 1000;
        printf("%.3lf %.3lf\n", x, y);
    }
}