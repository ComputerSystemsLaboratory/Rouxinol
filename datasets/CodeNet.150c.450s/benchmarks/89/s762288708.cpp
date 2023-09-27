#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;
bool isPrime(int raw) {
	if (raw == 1) { return false; }
	if (raw == 2) { return true; }
	if (raw % 2 == 0) { return false; }
	for (int j=3; j < sqrt((double)raw)+1; j += 2) {
		if (raw%j == 0) { return false; }
		
	}
	return true;
}

int main() {
	int a, d, n,i,raw,c=0;
	while (1) {

		cin >> a >> d >> n;
		if (a == 0) { break; }
		for (i = 0; c < n; i++) {
			raw = a + d*i;
			if (isPrime(raw) == true) {
				c += 1;
			}
			}
			cout << raw<< endl;
			c = 0;
		
	}
	return 0;
}