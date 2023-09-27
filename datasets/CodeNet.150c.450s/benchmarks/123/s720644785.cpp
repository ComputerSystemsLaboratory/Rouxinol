#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int x){
	if(x == 2) return true;
	if(x < 2 || x % 2 == 0) return false;
	int sqrtx = sqrt(x);
	for(int i = 3; i <= sqrtx; i = i + 2){
		if(x % i == 0) return false;
	}
	return true;
}

int main(){
	int n, count = 0;
	cin >> n;
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		if(isPrime(x)) count++;
	}
	cout << count << endl;

	return 0;
}