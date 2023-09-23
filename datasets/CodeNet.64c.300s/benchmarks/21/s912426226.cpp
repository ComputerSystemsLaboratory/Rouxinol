#include <bits/stdc++.h>
using namespace std;
int main()
{
    double x,y,a,b,c,d,e,f;

    while (scanf ("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f)==6)
    {
        y=(f*a-d*c)/((a*e-b*d)*1.0);
        x=(c-b*y)/a;

        printf ("%0.3lf %0.3lf\n",x,y);
    }
}
