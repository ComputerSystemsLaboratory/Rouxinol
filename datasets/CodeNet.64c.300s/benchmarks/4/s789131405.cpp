#include<stdio.h>
int main()
{
int a,b,c,d=0;
scanf("%d %d %d",&a,&b,&c);
if(a<b)
{
if(b<c)
{
printf("Yes\n");
d=1;
}
}
if(d==0)
{
printf("No\n");
}
return 0;
}