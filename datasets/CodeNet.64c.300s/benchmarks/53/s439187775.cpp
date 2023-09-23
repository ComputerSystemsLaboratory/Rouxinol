#include<stdio.h>
int main()
{
int a,b,c,l,m,n=0;
int i;
scanf("%d %d %d",&a,&b,&c);
for(i=1;i<=c;i++)
{
m=c%i;
if(m==0)
{
l=c/i;
if(l>=a&&l<=b)
{
n++;
}
}
}
printf("%d\n",n);
return 0;
}