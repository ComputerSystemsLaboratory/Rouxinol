#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool isPrime(int n){
	if(n <= 1)return false;
	if(n == 2)return true;
	if(n % 2 == 0)return false;
	int sq = sqrt(n) + 1;
	for(int i=3;i<=sq;i+=2){
		if(n % i == 0)return false;
	}
	return true;
}

int main() {
	int n, p;
	vector< int > factor;
	
	cin >> n;
	cout << n << ":";
	
	if(isPrime(n)){
		factor.push_back(n);
	}else{
		p = 2;
		while(n != 1){
			if(n % p == 0){
				n /= p;
				factor.push_back(p);
				
				if(isPrime(n)){
					factor.push_back(n);
					break;
				}
			}else{
				++p;
			}
		}		
	}
	

	
	for(int i=0;i<factor.size();++i){
		cout << " " << factor[i];
	}
	cout << endl;
	
	return 0;
}