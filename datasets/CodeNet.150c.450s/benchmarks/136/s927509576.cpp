#include <iostream>
#include <algorithm>
using namespace std;
int gcd(int a, int b) {
	if (b == 0) {
		return a;
	}
	return gcd(b, a%b);
}

int main(void) {
	long long p, q, r;
	while (cin >> p >> q) {
		if (p < q) {
			swap(p, q);
		}
		r = gcd(p, q);
		cout << r << ' ' << p*q / r << endl;
	}
	return 0;
}