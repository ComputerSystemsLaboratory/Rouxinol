#include <iostream>
#include <math.h>

using namespace std;

int checkPrime(int n) {
	int dev = 2;
	while ((dev < sqrt(n) + 1) && (dev < n)) {
		if (n % dev == 0) {
			return 0;
		}
		dev++;
	}

	return 1;
}

int main() {
	int n;
	cin >> n;

	int num = 0;
	for (int i = 0; i < n; i++) {
		int v;
		cin >> v;

		num += checkPrime(v);
	}

	cout << num << endl;

	return 0;
}
