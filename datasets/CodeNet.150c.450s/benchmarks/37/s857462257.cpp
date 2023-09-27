#include <cstdio>
using namespace std;

int main()
{
    double a,b,c,d,e,f;
    while (~scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f)) {
        double y = (f*a-c*d)/(a*e-d*b);
        double x = (c-b*y)/a;
        printf("%.3f %.3f\n",x,y);
    }
    return 0;
}