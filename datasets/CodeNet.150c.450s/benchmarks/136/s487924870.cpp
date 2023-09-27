#include <iostream>
using namespace std;

long long int gcd(long long int a, long long int b) {
	if (b == 0)
		return a;
	return gcd(b, a%b);
}

int main() {
	long long int a, b;
	while (cin >> a >> b) {
		long long int g = gcd(max(a, b), min(a, b));
		long long int l = a * b / g;

		cout << g << " " << l << endl;
	}
	return 0;
}