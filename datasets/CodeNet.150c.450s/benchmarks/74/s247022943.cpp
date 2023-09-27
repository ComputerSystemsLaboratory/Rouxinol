#include<stdio.h>
#include<iostream>
#include<string>
#include<math.h>
#include<algorithm>
using namespace std;


int main(){

	int N,M;
	cin>>N>>M;
	int c[22]={};
	for(int i=0;i<M;i++)
		cin>>c[i];
	int n[50002]={};
	//for(int i=0;i<=N;i++)
		//cout<<n[i]<<" "<<i<<endl;
	for(int i=0;i<M;i++){//cout<<endl;
		for(int j=0;j<=N;j++)
		{
			if(n[j]==0&&j%c[i]==0)n[j]=j/c[i];
			else if(n[j]==0&&n[j-c[i]]>=0&&j-c[i]>0)n[j]=n[j-c[i]]+1;
			 if(n[j]>n[j-c[i]]+1&&j-c[i]>=0)n[j]=n[j-c[i]]+1;
			//cout<<n[j];
		}}
	/*
		for(int i=0;i<=N;i++)
		cout<<n[i]<<" "<<i<<endl;
		*/
	cout<<n[N]<<endl;
	
	return 0;
}