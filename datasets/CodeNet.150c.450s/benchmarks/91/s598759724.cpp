#include <iostream>
#include <numeric>

#define MAX 1000000

using namespace std;

int main() {
	bool prime[MAX];
	fill(prime, prime + MAX, true);
	prime[0] = prime[1] = false;
	for (int i = 2; i * i < MAX; i++) {
		for (int j = 2; i * j < MAX; j++) {
			if (!prime[i * j]) {
				continue;
			}
			prime[i * j] = false;
		}
	}

	int n, count;
	while (cin >> n) {
		count = 0;
		for (int i = 2; i <= n; i++) {
			if (prime[i]) {
				count++;
			}
		}
		cout << count << endl;
	}

	return 0;
}