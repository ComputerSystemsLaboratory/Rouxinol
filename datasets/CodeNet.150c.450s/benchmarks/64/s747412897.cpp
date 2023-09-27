#include<stdio.h>
#include<iostream>
#include<string>
#include<algorithm>
#include <vector>
#include<math.h>


using namespace std;

int PP[50]={};

int tyok(int n,int i,int M){

	if(M==0)return 1;
	if(i>=n)return 0;
	int W=tyok(n,i+1,M)||tyok(n,i+1,M-PP[i]);
	return W;
}

int main(){
	int n,M,y;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>PP[i];
	cin>>y;
	for(int i=0;i<y;i++){
		cin>>M;
		if(tyok(n,0,M))cout<<"yes"<<endl;
		else cout<<"no"<<endl;
	}
	return 0;
}