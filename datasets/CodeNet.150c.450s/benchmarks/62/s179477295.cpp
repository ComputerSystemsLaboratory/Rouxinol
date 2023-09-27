#include<stdio.h>
int main()
{
int a[3],d=0;
 
scanf("%d %d %d",&a[0],&a[1],&a[2]);
 
for(int i=0;i<2;i++)
{
for(int j=1;j<=2;j++)
{
if(a[i]>a[j])
{
d=a[i];
a[i]=a[j];
a[j]=d;
}
}
}
printf("%d %d %d\n",a[0],a[1],a[2]);
return 0;
}