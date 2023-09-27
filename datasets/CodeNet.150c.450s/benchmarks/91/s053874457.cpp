#include<stdio.h>
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool F[1000000]={};


int main(){

	for(int i=2;i<1000000;i++)
	for(int j=2;j*j<=i;j++){
		if(i%j==0){F[i]=false;break;}
		else F[i]=true;
	}
	F[2]=true;F[3]=true;
	int N;
	while(cin>>N){
		int c=0;
		for(int i=0;i<=N;i++){
			if(F[i]==true){c++;//cout<<i<<endl;
			}}

		cout<<c<<endl;
	}
	return 0;

}