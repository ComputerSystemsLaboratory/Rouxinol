#include<stdio.h>
#include <math.h>
int main()
{
int x1, y1;
double a,b,c,d,m,n,x,y;

while(scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&m,&c,&d,&n)!=EOF){
x=1000*(d*m-b*n)/(a*d-b*c);
y=1000*(a*n-c*m)/(a*d-b*c);
x1=x;
y1=y;
x = (double)x1/1000;
y = (double)y1/1000;
printf("%.3lf %.3lf\n", x, y);
}
return 0;
}