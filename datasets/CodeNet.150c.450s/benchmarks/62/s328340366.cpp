#include <iostream>
using namespace std;
int main () {
	int a, b, c, t;

	cin >> a >> b >> c;

	if ( ((a >= 1) && (a <= 10000)) && ((b >= 1) && (b <= 10000)) && ((b >= 1) && (b <= 10000))) {
		if (a > b) {
			t = a;
			a = b;
			b = t;
		}
		if (b > c) {
			t = b;
			b = c;
			c = t;
		}
		if (a > b) {
			t = a;
			a = b;
			b = t;
		}
	} else {
		cout << "Input number is invalid.\n";
	}
	cout << a << " " << b << " " << c << "\n";
	return 0;
}