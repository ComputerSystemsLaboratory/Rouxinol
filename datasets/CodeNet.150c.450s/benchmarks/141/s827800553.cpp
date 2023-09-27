#include <stdio.h>
#include <string>
#include <iostream>
#include <math.h>

using namespace std;
double T_area(double x1,double y1, double x2, double y2, double x3, double y3);

int main(){
    double x[3]={0};
    double y[3]={0};
    while(scanf("%lf",&x[0])!=EOF){
        scanf("%lf",&y[0]);
        scanf("%lf",&x[1]);
        scanf("%lf",&y[1]);
        scanf("%lf",&x[2]);
        scanf("%lf",&y[2]);
        
        double xp,yp;
        scanf("%lf",&xp);
        scanf("%lf",&yp);

        double S =T_area(x[0],y[0],x[1],y[1],x[2],y[2]);
        double S1, S2, S3;
        S1 =T_area(xp,yp,x[1],y[1],x[2],y[2]);
        S2 =T_area(x[0],y[0],xp,yp,x[2],y[2]);
        S3 =T_area(x[0],y[0],x[1],y[1],xp,yp);
        
        if(S1+S2+S3==S){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
        
    }
    
    
}

double T_area(double x1,double y1, double x2, double y2, double x3, double y3){
    double S =fabs(x1*y2+x2*y3+x3*y1-y1*x2-y2*x3-y3*x1)/2;
    return S;
}