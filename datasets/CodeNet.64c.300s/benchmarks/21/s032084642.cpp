#include <iostream>
#include <cstdio>
int main()
{
    double a,b,c,d,e,f,y,x;
    while(std::cin >> a >> b >> c >> d >> e >> f) 
    {
        x = (double)((e*c-b*f) / (a*e-b*d));
        y = (double)((-(d*c)+a*f) / (a*e-b*d)); 
        if(x==0)x=0;
        if(y==0)y=0;
        printf("%.3lf %.3lf\n",x,y);
    }  
    return 0;
}