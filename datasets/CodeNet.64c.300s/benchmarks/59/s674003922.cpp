#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int x);

int main(){
	int N,x,cnt=0;
	cin >> N;
	for(int i=0; i<N; i++){
		cin >> x;
		if(isPrime(x)){
			cnt++;
		}
	} 
	cout << cnt << endl;
	return 0;
}

bool isPrime(int x){
	bool prime=false;
	int i=3;
	if(x == 1){
	}else if((x == 2) || (x == 3)){
		prime =true;
	}else if((x%2) == 0){
	}else{
		while(i < x){
			if((x%i) == 0){
				break;
			}else if(i > sqrt(x)){
				prime = true;
				break;
			}
			i = i+2;
		}
	}
	return prime;
}