#include <iostream>

using namespace std;

const unsigned long long mod = 1000000007uLL;

unsigned long long power(unsigned long long x, unsigned long long y) {
	if (y == 0) return 1uLL;
	if (y == 1) return x;
	unsigned long long t = power(x, y / 2);
	if (y % 2 == 1) return t * t % mod * x % mod; else return t * t % mod;
}

int main() {
	unsigned long long x, y;
	cin >> x >> y;
	cout << power(x, y)<<endl;
	return 0;
}