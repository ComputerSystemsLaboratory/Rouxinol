#include<stdio.h>
int main(){
    double x1,x2,x3,x4,y1,y2,y3,y4;
    while(~scanf("%lf%lf%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4)){
        bool ok1=true;
        bool ok2=true;
        if((x2-x1)*(y4-y1)-(x4-x1)*(y2-y1)<0)ok1=false;
        else ok2=false;
        if((x3-x2)*(y4-y2)-(x4-x2)*(y3-y2)<0)ok1=false;
        else ok2=false;
        if((x1-x3)*(y4-y3)-(x4-x3)*(y1-y3)<0)ok1=false;
        else ok2=false;
        printf((ok1||ok2)?"YES\n":"NO\n");
    }
}