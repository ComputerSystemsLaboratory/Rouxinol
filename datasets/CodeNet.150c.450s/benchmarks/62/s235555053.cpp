#include <iostream>
using namespace std;

int main() {
	int a = 0;
        int b = 0;
        int c = 0;

	cin >> a >> b >> c;

	if (a <= b&&b <= c&&a <= c) {
		cout << a << " " << b << " " << c << endl;
	}
	else if (a <= b && b >= c && a <= c) {
		cout << a << " " << c << " " << b << endl;
	}
	else if (a >= b && b <= c && a <= c) {
		cout << b << " " << a << " " << c << endl;
	}
	else if (a >= b && b <= c && a >= c) {
		cout << b << " " << c << " " << a << endl;
	}
	else if (a >= b && b >= c && a >= c) {
		cout << c << " " << b << " " << a << endl;
	}
	else if (a <= b && b >= c && a >= c) {
		cout << c << " " << a << " " << b << endl;
	}
	return 0;

}
