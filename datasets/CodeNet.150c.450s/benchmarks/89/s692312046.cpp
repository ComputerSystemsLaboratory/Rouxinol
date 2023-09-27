#include <iostream>

using namespace std;



bool isPrime(int n) {
	if (n<2) return false;
	for (int i=2; i * i <= n; i++) {
		if (n%i == 0) return false;
	}
	return true;
}

int main() {
	
	while (1) {
		int a, d, n; cin >> a >> d >> n; if (a==0 && d==0 && n==0) break;
		
		int i = 0;
		int number = a;
		while (1) {
			if (isPrime(number)) i++;
			if (i == n) break;
			number += d;
		}
		cout << number << endl;		
	}
	
	return 0;
}