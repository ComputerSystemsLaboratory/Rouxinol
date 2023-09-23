#include<stdio.h>

int main()
{
int p[4]={};
int q[4]={};
int x,H,B;
H=0;B=0;
/*
for(int i=0;i<4;i++)
{scanf("%d",&x);p[i]=x;}
for(int i=0;i<4;i++)
{scanf("%d",&x);q[i]=x;}*/
while(scanf("%d %d %d %d %d %d %d %d",&p[0],&p[1],&p[2],&p[3],&q[0],&q[1],&q[2],&q[3])!=EOF)
{

for(int i=0;i<4;i++)
for(int j=0;j<4;j++)
{if(p[i]==q[j]){
	if(i==j)H++;
    else if(i!=j)B++;
}}
printf("%d %d\n",H,B);
H=0;B=0;
}

return 0;
}