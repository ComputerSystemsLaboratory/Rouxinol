#include<stdio.h>
#include<iostream>
using namespace std;
int main(void)
{
	int a[101]={0},i,n,s=0;
	while(cin>>n){
	a[n]++;
		if(a[n]>s){
			s=a[n];
		}
	}
	for(i=1;i<=100;i++){
		if(s==a[i]){
		cout<<i<<endl;
		}
	}
	return 0;
}