// AOJ 009

#include <iostream>
#define MAX_NUMBER 1000000
using namespace std;

bool isPrime[MAX_NUMBER];

void SetFalseToMultiples (int prime) {
	for (int i = prime*2; i < MAX_NUMBER;i+=prime) {
		isPrime[i] = false;
	}
	return;
}	

int CountPrimes(int n) {
	int count = 0;
	for (int i = 1;i <= n;i++) {
		if (isPrime[i]) count++;
	}
	return count;
}

int main() {
	for (int i = 0;i < MAX_NUMBER;i++) {
		isPrime[i] = true;	
	}
	isPrime[1] = false;
	
	for (int i = 1;i < MAX_NUMBER;i++) {
		if (isPrime[i]) {
			SetFalseToMultiples(i);
		}
	}
	int n;
	while (cin >> n) {
		cout << CountPrimes(n) << endl;
	}
	return 0;
}