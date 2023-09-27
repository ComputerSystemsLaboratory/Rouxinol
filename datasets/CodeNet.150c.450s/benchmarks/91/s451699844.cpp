//Prime Number
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	const int MAX = 1000000;
	bool isPrime[MAX];
	for(int i = 0; i < MAX; i++) {
		isPrime[i] = true;
	}
	
	for(int i = 2; i*i < MAX; i++) {
		if(isPrime[i]) {
			for(int j = i*i; j < MAX; j += i) {
				isPrime[j] = false;
			}
		}
	}
	
	int n;
	while(cin >> n) {
		int count = 0;
		for(int i = 2; i <= n; i++) {
			if(isPrime[i]) count++;
		}
		cout << count << endl;
	}
	
	return 0;
}