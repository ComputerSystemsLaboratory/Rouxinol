#include<iostream>
#include<string.h>
using namespace std;
long long sin[100001];
int main(){
	while(1){
	memset(sin,0,sizeof(sin));
	int n,k;
	int i,j,max=0,x;
	cin>>n>>k;
		if(n==0&&k==0)break;
	for(i=0;i<n;i++){
		cin>>sin[i];
	}
	for(i=0;i<n-k+1;i++){
		x=0;
		for(j=0;j<k;j++){
			x+=sin[i+j];
		}
		if(max<x)max=x;
	}
	cout<<max<<endl;
	}
}