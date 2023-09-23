#include<iostream>
using namespace std;

bool is_prime(int n) {
	for (int i = 2; i*i <= n; i++) {
		if (n%i == 0)return false;
	}
	return n != 1;
}

int main() {
	int a, d, n;
	while (cin >> a >> d >> n, a) {
		int p = 0;
		for (int i = a;; i += d) {
			if (is_prime(i))p++;
			if (p == n) {
				cout << i << endl;
				break;
			}
		}
	}
}