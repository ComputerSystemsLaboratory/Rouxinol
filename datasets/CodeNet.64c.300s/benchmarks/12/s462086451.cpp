#include<stdio.h>
int main()
{
int x;
scanf("%d\n",&x);
if((x>=1)&&(x<=100)){
x=x*x*x;
printf("%d\n",x);
}
return 0;
}