#include<stdio.h>
#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
long long p[5001]={0};
int main(){
while(1){
memset(p,0,sizeof(p));
long long n,i,j,t,a;
cin>>n;
if(n==0)break;
for(i=1;i<=n;i++){
cin>>a;
p[i]=p[i-1]+a;
}
t=-999999999;
for(i=1;i<=n;i++){
	for(j=0;j<i;j++){
t=max(t,p[i]-p[j]);
}
}
cout<<t<<endl;
}
return 0;
}