#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
typedef unsigned long long ll;

bool isPrime(ll n) {
	if (n == 1) return false;
	if (n == 2) return true;
	if (n % 2 == 0) return false;
	for (ll i = 3; i * i <= n; i+=2) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	ll a, d, n;
	while (cin >> a >> d >> n, a + d + n != 0) {
		int count = 0;
		do {
			if (isPrime(a) == true) {
				count ++;
				if (count == n) {
					cout << a << endl;
					break;
				}
			}
			a += d;
		} while (true);
	}
	return 0;
}