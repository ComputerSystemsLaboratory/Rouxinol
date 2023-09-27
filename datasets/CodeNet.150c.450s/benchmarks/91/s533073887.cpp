#include <iostream>
using namespace std;

int main() {
	bool isPrime[1000000] = {true};

	for (int i = 0; i < 1000000; i++) {
		isPrime[i] = true;
	}

	isPrime[1] = false;
	for (int i = 2; i < 1000000; i++) {
		if (!isPrime[i])
			continue;

		if (isPrime[i]) {
			int k = 2*i;
			while (k < 1000000) {
				isPrime[k] = false;
				k += i;
			}
		}
	}

	int n;
	while (cin >> n) {
		int sum = 0;
		for (int i = 2; i <= n; i++) {
			if (isPrime[i])
				sum++;
		}
		cout << sum << endl;
	}

	return 0;
}