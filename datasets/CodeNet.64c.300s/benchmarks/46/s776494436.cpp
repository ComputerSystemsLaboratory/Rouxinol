#include <iostream>

using namespace std;

#define PRIMENUM 1000000

int isPrime[PRIMENUM];

void makePrimeNumber(){

	isPrime[2]=1;
	isPrime[3]=1;

	for(int i=4;i<PRIMENUM;i++){
		int flag=0;
		for(int j=2;j*j<=i;j++){
			if(i%j==0){
				flag=1;
				break;
			}
		}
		if(flag==0){
			isPrime[i]=1;
			//cout<<i<<endl;
		}	
	}

}


int main(){

	makePrimeNumber();

	int a,d,n;

	while(cin>>a>>d>>n){
		if(a==0 && d==0 && n==0)break;

		int cnt=0;
		while(1){
			if(isPrime[a]==1){
				cnt++;
			}
			if(cnt==n){
				break;
			}
			a+=d;
		}
		cout<<a<<endl;
	}

	return 0;
}