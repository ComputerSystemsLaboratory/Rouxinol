#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	int a,n,c=0;
	while(1){
		c=0;
	cin>>a>>n;
	if(a==0&&n==0)break;
	for(int i=1;i<=a;i++)for(int j=i+1;j<=a;j++)for(int k=j+1;k<=a;k++)if(i+j+k==n)c++;
cout<<c<<'\n';
}return 0;
}