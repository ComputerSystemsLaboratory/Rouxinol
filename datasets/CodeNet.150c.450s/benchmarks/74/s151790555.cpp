#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int p[50001],a[20];
int main(){
int n,m,i,j;
cin>>n>>m;
for(i=0;i<m;i++)cin>>a[i];
for(i=1;i<=n;i++)p[i]=50000;
p[0]=0;
for(i=0;i<n;i++){
for(j=0;j<m;j++){
if(n>=i+a[j])p[i+a[j]]=min(p[i+a[j]],p[i]+1);
}
}
cout<<p[n]<<endl;
return 0;
}