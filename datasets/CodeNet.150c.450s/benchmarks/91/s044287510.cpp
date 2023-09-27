#include <iostream>
#include <vector>
#include <algorithm>

bool isPrime(int num){
	if(num<2){
		return false;
	}
	for(int i{2};i*i<=num;++i){
		if(num%i==0){
			return false;
		}
	}
	return true;
}

int main(){
	const int MAX_NUM{1000000};
	int NUM{0};
	std::vector<bool> vPrime(MAX_NUM,false);
	for(int i{0};i<MAX_NUM;++i){
		vPrime[i]=isPrime(i);
	}

	while(std::cin >> NUM){
		int cntPrime{0};
		for(int i=0;i<=NUM;++i){
			if(vPrime[i]){
				++cntPrime;
			}
		}
		std::cout << cntPrime << std::endl;
		}
	return 0;
}