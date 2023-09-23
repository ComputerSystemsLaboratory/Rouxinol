#include<stdio.h>
#include<iostream>
#include<string>
#include<math.h>
#include<algorithm>
using namespace std;

int n[100003]={};
int main(){

	int N;
	cin>>N;
	for(int i=0;i<N;i++)
		cin>>n[i];
	
	int x=0,y=0;
	while(x<N&&y<N){
		
		if(n[x]<=n[N-1]){x++;y=x+1;}
		else if(n[x]>n[N-1]&&n[y]>n[N-1])y++;
		else if(n[x]>n[N-1]&&n[y]<=n[N-1]){
			int t=n[y];n[y]=n[x];n[x]=t;
			x++;y++;
			
		}
	}

	//	cout<<n[N-1];
//	int t=n[N-1];n[N-1]=n[x-1];n[x-1]=t;
			
	for(int i=0;i<N;i++)
	{
		if(i>0)cout<<" ";
		if(i!=x-1)cout<<n[i];
		if(i==x-1)cout<<"["<<n[i]<<"]";
	}
	cout<<endl;

	return 0;
	}