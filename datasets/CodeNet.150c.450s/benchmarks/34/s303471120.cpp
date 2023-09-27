#include<stdio.h>

int main(){

int x[32]={1,2,4};
for(int i=3;i<31;i++)
x[i]=x[i-1]+x[i-2]+x[i-3];

int n;
while(1){
scanf("%d",&n);if(n==0)break;
int d=x[n-1];
int y=d/365/10+1;
printf("%d\n",y);
}
return 0;
}