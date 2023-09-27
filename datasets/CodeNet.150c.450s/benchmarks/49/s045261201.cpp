#include<stdio.h>

int main(){

int n;
int P[102]={};
while(1){
scanf("%d",&n);if(n==0)break;
for(int i=0;i<n;i++)
scanf("%d",&P[i]);

int s=0;
for(int i=0;i<n;i++)
for(int j=n-1;j>i;j--)
if(P[j]>P[j-1]){int t=P[j];P[j]=P[j-1];P[j-1]=t;}

for(int i=0;i<n;i++)
if(i!=0&&i!=n-1)s+=P[i];

s=s/(n-2);
printf("%d\n",s);
}
return 0;
}