#include<stdio.h>

int main(){

bool N[31]={};int x;
for(int i=0;i<30;i++)
N[i]=false;
for(int i=0;i<28;i++)
{scanf("%d",&x);x=x-1;N[x]=true;}
for(int i=0;i<30;i++)
{if(N[i]==false){int p=i+1;printf("%d\n",(p));}}
return 0;
}