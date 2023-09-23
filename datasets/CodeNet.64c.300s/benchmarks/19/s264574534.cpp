#include<stdio.h>

int N[5001]={};
int main(){

int n,x;

while(1){
scanf("%d",&n);if(n==0)break;


for(int i=0;i<n;i++)
scanf("%d",&N[i]);
int t=N[0],s=0;
for(int i=0;i<n;i++)
{
for(int j=i;j<n;j++)
{
s+=N[j];if(t<s)t=s;
}
s=0;
}
printf("%d\n",t);
}
return 0;
}