#include <iostream>
#include <vector>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

bool is_prime(int n) {
	if (n < 2) {
			return false;
	}
	if (n==2||n==3) {
		return true;
	}
	for (int i = 3; i < n; i = i+2) {
		if (n%i==0) {
			return false;
		}
	}
	return true;
}

int main(void) {
	int N = 1100000;
	int a,d,n;
	cin >> a;
	cin >> d;
	cin >> n;

	std::vector<bool> prime(N);
	for (int i = 0; i < N+1; i++) {
		prime[i] = true;
	}
	prime[0] = false;
	prime[1] = false;
	for (int i = 2; i <= sqrt(N); i++) {
		if (is_prime(i)) {
			for (int j = 2; i*j < N+1; j++) {
				prime[i*j] = false;
			}
		}
	}
	
	while (a!=0||d!=0||n!=0) {
		bool find = false;
		int count = 0;
		int b;
		for (int i = 0; !find; i++) {
			b = a + (d*i);
			if (prime[b]) {
				count++;
			}
			if (count == n) {
				cout << b << endl;
				find = true;
			}
		}

		cin >> a;
		cin >> d;
		cin >> n;
	}

	return 0;
}