#include<stdio.h>
#include<iostream>
using namespace std;
void swap(int* a,int s,int v){
int c;
c=a[s];
a[s]=a[v];
a[v]=c;
return;
}
int main(){
int w,n;
int ans[100];
int sw[2];
scanf("%d %d",&w,&n);
int i;
for(i=1;i<=w;i++){
ans[i]=i;
}
for(i=0;i<n;i++){
sw[1]=sw[0]=0;
scanf("%d,%d",&sw[0],&sw[1]);
swap(ans,sw[0],sw[1]);
}
for(i=1;i<=w;i++){
printf("%d\n",ans[i]);
}
return 0;
}