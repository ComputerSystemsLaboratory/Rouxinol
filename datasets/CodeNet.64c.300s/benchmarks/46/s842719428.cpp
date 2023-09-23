#include<iostream>

using namespace std;

#define NUMMAX 1000001

int main(){

	int prime[NUMMAX]={0};
	int a,d,n,cnt;

	prime[0]=1,prime[1]=1;

	for(int i=0;i<NUMMAX;i++){
		if(prime[i]==0){
			for(int j=i*2;j<NUMMAX;j+=i){
				prime[j]=1;
			}
		}
	}

	while(1){

		cin>>a>>d>>n;
		if(a==0&&d==0&&n==0) break;

		for(int i=a,cnt=0;;i+=d){
			if(prime[i]==0) cnt++;
			if(cnt==n){
				cout<<i<<endl;
				break;
			}
		}
	}
	return 0;
}