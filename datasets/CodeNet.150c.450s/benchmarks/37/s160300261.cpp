#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c,d,e,f;
    double l,k;
    while (scanf ("%d %d %d %d %d %d", &a,&b,&c,&d,&e,&f) != EOF){
        l= a*e-d*b;
        k = b*d - a*e;
        double x = (c*e-b*f)/l;
        double y =(c*d - a*f)/k;

        if(x ==0)
            x = abs(x);
        if(y == 0)
            y = abs(y);

        printf("%.3lf %.3lf\n",x,y);
    }
    return 0;
}