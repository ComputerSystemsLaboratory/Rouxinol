#include<stdio.h>

int main()
{
int x,n,min,max;
long w;
scanf("%d",&n);
x=min=max=NULL;
w=0;
for(int i=0;i<n;i++)
{
scanf("%d",&x);
if(i==0){max=x;min=x;}

if(x<min)min=x;
if(x>max)max=x;
w=w+(long)x;
x=0;
}
printf("%d %d %ld\n",min ,max ,w);
return 0;
}