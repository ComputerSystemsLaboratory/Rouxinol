#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
    int n,a[100001]={0},k,sum,p;
int i,j,h;
while(1){
cin>>n>>k;
if(n==0&&k==0)break;
cin>>a[1];
for(i=2;i<=n;i++){
	cin>>a[i];
	a[i]+=a[i-1];
}
sum=a[k];
for(i=k+1;i<=n;i++){
    sum=max(sum,a[i]-a[i-k]);
	}
cout<<sum<<endl;
}
return 0;
}

