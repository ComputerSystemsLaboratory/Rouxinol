#include <iostream>
using namespace std;
int gcd(int a, int b) {
	if (a%b) {
		return gcd(b,a%b);
	}else {
		return b;
	}
}
int main() {
	int a = 0;
	int b = 0;
	int max = 0;
	int d = 0;

	while (cin >> a >> b) {
		if (a > b) {
			max = b;
		}
		else {
			max = a;
		}
		d = gcd(a, b);
		a = a / d * b;
		cout << d << ' ' << a << "\n";
	}
	return 0;
}