#include <stdio.h>

int main(){
    double a,b,c,d,e,f;
    double x,y;
    
    while (scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f) != EOF) {
        x=(double)((c*e-b*f)/(a*e-b*d));
        y=(double)((c*d-a*f)/(b*d-a*e));
        if(a*e-b*d==0||b*d-a*e==0){
            return 1;
        }
        if(x==-0){
            x=0;
        }
        if(y==-0){
            y=0;
        }
        printf("%.3f %.3f\n",x,y);
    }
    
    return 0;
}