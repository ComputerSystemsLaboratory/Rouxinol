#include<iostream>
#include <algorithm>
using namespace std;
#define MAX_LIST 1000000 



int main(){
	bool *prime=(bool *)malloc(sizeof(bool)*MAX_LIST);
	for(int i=0;i<MAX_LIST;i++){
		prime[i]=1;
	}
	prime[0]=prime[1]=0;
	for(int i=0;i*i<MAX_LIST;i++){
		if(prime[i]==1){ 
			for(int j=i*2;j<MAX_LIST;j=j+i){
				prime[j]=0;
			}
		}
	}
	int a,d,n;
	while(cin>>a>>d>>n,a){
		int ans=0;
		for(int i=a;n;i=i+d){
			if(prime[i]==1){
				n--;
			}
			if(n==0){
				ans=i;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}