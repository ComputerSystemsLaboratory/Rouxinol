#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n){
	
	if(n == 2) return true;
	else if(n%2 == 0) return false;
	
	int i = 3;
	while(i <= sqrt(n)){
		if(n%i==0){
			return false;
		}
		else{
			i = i + 2;
		}
	}
	return true;
}


int main() {
	int N, element, count = 0;
	
	cin >> N;
	
	for(int i = 0; i<N ;i++){
		cin >> element;
		if(isPrime(element) == true) {
			count++;
			//cout << element << endl;
		}
	}
	cout << count << endl;
}