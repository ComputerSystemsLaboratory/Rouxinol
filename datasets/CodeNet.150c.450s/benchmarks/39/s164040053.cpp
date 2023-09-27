#include <stdio.h>
int main(void)
{
int a,b;
scanf ("%d %d",&a,&b);
if (a>=1 && a<=100 && b>=1 && b<=100){
printf ("%d %d\n",a*b,a*2+b*2);
}
return 0;
}