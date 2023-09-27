#include<stdio.h>
int P[100001];

int main(){

int n,k;
int x,x1,x2,x3;
while(1){
scanf("%d %d",&n,&k);
if(n==0&&k==0)break;
int s=0,max=0;

for(int i=0;i<n;i++)
{scanf("%d",&P[i]);}


for(int j=0;j<k;j++)
s+=P[j];
max=s;

for(int i=k;i<n;i++)
	{s+=P[i];s-=P[i-k];

if(s>max)max=s;}

printf("%d\n",max);
}
return 0;
}