#include <iostream>

using namespace std;

long gcd(long a, long b) {
	if (a < b)
		swap(a, b);
	if (b == 0)
		return a;
	return gcd(b, a % b);
}

long lcm(long a, long b) {
	return (a * b) / gcd(a, b);
}

int main() {
	long a, b;
	while (cin >> a >> b)
		cout << gcd(a, b) << " " << lcm(a, b) << endl;
	return 0;
}