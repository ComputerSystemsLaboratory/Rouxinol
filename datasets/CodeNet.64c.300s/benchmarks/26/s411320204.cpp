#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
long long m, n;
#define mod 1000000007

long long pow_mod(long long a, long long b) {
	if (b == 0) return 1;
	if (b % 2 == 0) {
		long long d = pow_mod(a, b / 2);
		return ((d%mod)*(d%mod)) % mod;
	}
	return ((a%mod)*(pow_mod(a, (b - 1)) % mod)) % mod;
}
int main() {
	cin >> m >> n;
	cout << pow_mod(m, n) << endl;
	return 0;
}
