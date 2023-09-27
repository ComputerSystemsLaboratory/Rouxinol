#include<iostream>
using namespace std;
int prime[1200000];
int main(){
	for(int i=2;i<1200000;i++)prime[i]=1;
	for(int i=2;i*i<1200000;i++){
		for(int j=i*i;j<1200000;j+=i){
			prime[j]=0;
		}
	}
	for(int i=2;i<1200000;i++)prime[i]+=prime[i-1];
	int n;
	while(cin>>n){
		cout<<prime[n]<<endl;
	}
}