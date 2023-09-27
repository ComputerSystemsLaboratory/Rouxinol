#include<stdio.h>
#include<iostream>
using namespace std;
long long p[100][21]={0};
int a[100];
int main(){
int i,j,n;
cin>>n;
for(i=0;i<n;i++)cin>>a[i];
p[0][a[0]]=1;
for(i=0;i<n-1;i++){
for(j=0;j<=20;j++){
if(p[i][j]>0){
if(j+a[i+1]<=20)p[i+1][j+a[i+1]]=p[i+1][j+a[i+1]]+p[i][j];
if(j-a[i+1]>=0)p[i+1][j-a[i+1]]=p[i+1][j-a[i+1]]+p[i][j];
}
}
}
cout<<p[n-2][a[n-1]]<<endl;
return 0;
}