#include<stdio.h>
int main()
{
int m,n,x;
int p[100][100];
int pp[100],wa;

scanf("%d",&n);scanf("%d",&m);
for(int i=0;i<n;i++){
for(int j=0;j<m;j++)
{
scanf("%d",&x);
p[i][j]=x;
}
}
for(int i=0;i<m;i++){
scanf("%d",&x);
pp[i]=x;
}
wa=0;
for(int i=0;i<n;i++){
	
for(int k=0;k<m;k++)
{
wa+=p[i][k]*pp[k];
}
printf("%d\n",wa);
wa=0;
}
return 0;
}