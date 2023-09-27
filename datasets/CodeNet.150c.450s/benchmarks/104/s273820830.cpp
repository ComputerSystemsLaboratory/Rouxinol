#include<iostream>
#include<cstdio>
using namespace std;
int main(){
int w,n,i;
cin>>w>>n;
int l[w];
for(i=0;i<w;i++){
l[i]=i;
}
for(i=0;i<n;i++){
int a,b,t;
scanf("%d,%d",&a,&b);
t=l[a-1];
l[a-1]=l[b-1];
l[b-1]=t;
}
for(i=0;i<w;i++){
printf("%d\n",l[i]+1);
}
return 0;
}