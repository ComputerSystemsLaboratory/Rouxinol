#include<iostream>
using namespace std;

int num=0;
bool data[10]={};

int fac(int n){
	if(n==1)return 1;
	return n*fac(n-1);
}

int func(int n,int s){
	if(s<0 || n<0){
		return 0;
	}
	if(s==0){
		if(n==0){return 1;}
		else if(n>=2){return 0;}
	}
	if(n==1){
		for(int j=0;j<10;j++){
			if(s==j && data[j]==0){
				return 1;
			}
		}
	}
	for(int i=0;i<10;i++){
		if(data[i]==0){
			data[i]=1;
			num+=func(n-1,s-i);
			data[i]=0;
		}
	}
	int nn=num;
	num=0;
	return nn;
}

int main(){
	int n,s;
	while(1){
		cin>>n>>s;
		if(n==0 && s==0)break;
		num=0;
		cout<<func(n,s)/fac(n)<<endl;
	}
	return 0;
}