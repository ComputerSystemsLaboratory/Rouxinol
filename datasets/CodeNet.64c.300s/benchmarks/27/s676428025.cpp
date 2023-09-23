#include<stdio.h>

int main()
{
int x,n,cou;
cou=0;
while(1)
{
	cou=0;
scanf("%d",&n);scanf("%d",&x);
if(x==0&&n==0)break;
for(int i=1;i<=n-2;i++){
for(int j=i+1;j<=n-1;j++){
for(int k=j+1;k<=n;k++)
{
if(i+j+k==x)cou++;
}}}
printf("%d\n",cou);
}
return 0;
}