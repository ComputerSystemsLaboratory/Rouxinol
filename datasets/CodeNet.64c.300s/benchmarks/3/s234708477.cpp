#include<stdio.h>
#include<string.h>
int main()
{
int i;
int n[100];
int a,b;
scanf("%d",&a);
for(i=0;i<a;i++)
{
scanf("%d",&b);
n[i]=b;
}
for(i=a-1;i>=0;i--)
{
printf("%d",n[i]);
if(i!=0)
{
printf(" ");
}
}
printf("\n");
return 0;
}