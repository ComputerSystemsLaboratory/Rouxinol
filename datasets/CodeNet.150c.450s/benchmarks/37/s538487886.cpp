#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    double a,b,c,d,e,f;

    while(scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f)!=EOF){
        double x=(c*e-b*f)/(a*e-b*d);
        double y=(a*f-c*d)/(a*e-b*d);

        if(fabs(x)<0.001) x=0;
        if(fabs(y)<0.001) y=0;

        printf("%.3lf %.3lf\n",x,y);
    }

    return 0;
}