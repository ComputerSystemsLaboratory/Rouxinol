#include <iostream>

using namespace std;

bool isprime(int n) {
	if (n == 2) return true;
	if (n <= 1 || n % 2 == 0) return false;
	int i = 3;
	while (n >= i*i) {
		if (n % i == 0) return false;
		i += 2;
	}
	return true;
}

int main() {
	while (true) {
	int a, b, n;
	cin >> a >> b >> n;
	if (a == b && b == n && n == 0) break;
	int primenumber_counter = 0, res, cnt = 0;
	while (primenumber_counter != n) {
		res = a + b*cnt;
		if (isprime(res)) {
			++primenumber_counter;
		}
		++cnt;
	}
	cout << res << endl;
	}
	return 0;
}