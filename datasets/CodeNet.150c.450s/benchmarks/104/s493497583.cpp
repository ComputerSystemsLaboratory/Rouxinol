#include<stdio.h>

int main(){

int x[32][2]={};
int w,n;

scanf("%d",&w);
scanf("%d",&n);
for(int i=0;i<=w;i++)
x[i][0]=i;

for(int i=0;i<n;i++)
{
int a1,a2;
scanf("%d,%d",&a1,&a2);
int t=x[a1][0];x[a1][0]=x[a2][0];x[a2][0]=t;
}

for(int i=1;i<=w;i++)
printf("%d\n",x[i][0]);

return 0;
}