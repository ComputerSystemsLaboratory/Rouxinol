#include<stdio.h>
#include<iostream>
using namespace std;

int main(){

	long long int N;
	while(1){
	char G[1001];
	for(int i=0;i<1000;i++)
	{
		G[i]=-1;
	}

	cin>>N;if(N==0)break;
	for(int i=0;i<N;i++){
		char x,y;
		cin>>x>>y;
		G[x]=y;

	}
	int NN;
	cin>>NN;
	for(int i=0;i<NN;i++){
		char h;
		cin>>h;
		if(G[h]==-1)cout<<h;
		else if(G[h]!=-1)cout<<G[h];
	

	}
	cout<<endl;
	}

	return 0;
}