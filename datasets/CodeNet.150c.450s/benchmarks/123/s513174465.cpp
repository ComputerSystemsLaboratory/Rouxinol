#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int x){
	if(x==2){
		return true;
	}else if(x%2==0){
		return false;
	}
	
	for(int i=3;i*i<=x;i=i+2){
		if(x%i==0){
			return false;
		}
	}
	return true;
	
}

int main() {
	int N;
	cin>>N;
	int numberOfPrimeNumber = 0;
	
	for(int i=0;i<N;i++){
		int primeNumber;
		cin>>primeNumber;
		
		if(isPrime(primeNumber)){
			numberOfPrimeNumber++;
		}
		
	}
	
	cout<<numberOfPrimeNumber<<endl;
	
	return 0;
}