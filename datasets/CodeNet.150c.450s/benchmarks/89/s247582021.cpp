#include <iostream>

using namespace std;

const int MAX = 1000000;

void sieve(bool isprime[]) {
	for (int i = 0; i < MAX + 1; i++) {
		isprime[i] = true;
	}
	isprime[0] = isprime[1] = false;

	for (int i = 2; i < MAX + 1; i++) {
		if (isprime[i]) {
			for (int j = i * 2; j < MAX + 1; j += i) {
				isprime[j] = false;
			}
		}
	}

	return;
}

int main() {
	int a, d, n;
	int num;
	int i;
	bool isprime[MAX + 1];
	sieve(isprime);

	while (true) {
		cin >> a >> d >> n;
		if (a == 0) {
			break;
		}
		
		num = 0;
		i = a;
		do {
			if (isprime[i]) {
				num++;
			}
			i += d;
		} while (num < n);

		cout << i - d << endl;
	}

	return 0;
}