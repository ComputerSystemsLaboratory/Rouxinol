#include <cstdio>

int main(){
    double a,b,c,d,e,f;
    while(scanf("%lf %lf %lf %lf %lf %lf", &a,&b,&c,&d,&e,&f)+1){
        double x = (c*e-b*f)/(a*e-b*d);
        double y = (c*d-a*f)/(b*d-a*e);
        if( x == 0 ) x = 0;
        if( y == 0 ) y = 0;
        //x = ((int)(x*1000+0.5))/1000;
        //y = ((int)(y*1000+0.5))/1000;
        printf("%.3lf %.3lf\n", x, y);
        //printf("%.3lf %.3lf\n", x+0.0005, y+0.0005);
    }

   // double dd = 1.3335;
   // printf("%.3lf\n", dd);
   // //dd = ((int)(dd*1000+0.5))/1000;
   // printf("%.3lf\n", dd*1000);
   // printf("%.3lf\n", dd*1000+0.5);
   // printf("%.3lf\n", ((int)(dd*1000+0.5))/1000);
   // printf("%.3lf\n", dd);
    

    return 0;
}