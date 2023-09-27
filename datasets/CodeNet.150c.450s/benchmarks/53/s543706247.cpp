#include <iostream>
#include <cmath>
using namespace std;

bool isprime(int n){
	if(n==1)return false;
	if(n==2)return true;
	for(int i=2;i<=sqrt(n)+1;i++){
		if(n%i==0)return false;
	}
	return true;
}

int main(void){
	int h;
	cin>>h;
	// int n=h;
	cout<<h<<":";
	int n=h;
	for(int i=2;i<=sqrt(h)+1;i++){
		if(isprime(i)){
			while(n%i==0){
				n/=i;
				cout<<" "<<i;
			}
			if(isprime(n))break;
		}
	}
	if(n!=1)cout<<" "<<n;
	cout<<endl;
	return 0;
}