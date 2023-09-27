#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>

using namespace std;

const int P_MAX = 1e6;

int main() {
	vector<bool> isPrime(P_MAX + 1, true);
	vector<int> primes(P_MAX / 2, 0);
	isPrime[0] = isPrime[1] = 0;

	for (int i = 4; i <= P_MAX; i += 2) {
		isPrime[i] = false;
	}
	int limit = sqrt(P_MAX);
	for (int i = 3; i <= limit; i += 2) {
		if (!isPrime[i]) {
			continue;
		}
		for (int j = i * 2; j <= P_MAX; j += i) {
			isPrime[j] = false;
		}
	}

	primes[0] = 2;
	int n_p = 1;
	for (int i = 3; i <= P_MAX; i += 2) {
		if (isPrime[i]) {
			primes[n_p] = i;
			n_p++;
		}
	}

	int n, m;
	scanf("%d", &n);
	int count = 0;

	for (int i = 0; i < n; i++) {
		scanf("%d", &m);
		if (m <= P_MAX) {
			count += isPrime[m] ? 1 : 0;
		} else {
			int limit = sqrt(m);;
			bool ok = true;
			for (int j = 0; j < n_p; j++) {
				if (primes[j] > limit) {
					break;
				}
				if (m % primes[j] == 0) {
					ok = false;
					break;
				}
			}
			if (ok) {
				count++;
			}
		}
	}
	printf("%d\n", count);
	return 0;
}