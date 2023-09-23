#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool is_prime(int n) {
	if (n == 2 || n == 3) {
		return true;
	}

	if (n < 2 || n%2 == 0) {
		return false;
	}
	
	for (int i = 3; i < n; i = i+2) {
		if (n%i == 0) {
			return false;
		}
	}
	return true;
}

int main(void) {
	int N = 1100000;
	vector<bool> prime(N);
	for (int i = 0; i < N+1; ++i) {
		prime[i] = true;
	}
	prime[0] = false;
	prime[1] = false;
	for (int i = 2; i <= sqrt(N); ++i) {
		if (is_prime(i)) {
			for (int j = 2; i*j < N+1; ++j) {
				prime[i*j] = false;
			}
		}
	}
	int a,d,n;
	while (cin >> a >> d >> n, n) {
		int count = 0;
		bool find = false;
		for (int i = a; !find && i < N; i = i+d) {
			if (prime[i]) {
				++count;
				if (count == n) {
					cout << i << endl;
					find = true;
				}
			}
		}
	}
	return 0;
}