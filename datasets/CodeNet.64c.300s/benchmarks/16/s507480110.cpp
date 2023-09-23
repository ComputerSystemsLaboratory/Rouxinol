#include<stdio.h>
#include<string.h>
#include<iostream>
#include<algorithm>
using namespace std;
int p[200000]={0};
int main(){
int i,n,d=-1000000001,b;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&p[i]);
b=p[n-1];
for(i=n-2;i>=0;i--){
d=max(d,b-p[i]);
if(b<p[i])
b=p[i];
}
printf("%d\n",d);
return 0;
}
