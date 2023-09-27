#include <iostream>

using namespace std;

int main() {
	int a;
	while (cin >> a) {
		if (a == 0) {
			break;
		}
	a = 1000 - a;
	int counter = 0;
	if (a >= 500) {
		counter += a/500;
		a %= 500;
	}
	if (a >= 100) {
		counter += a/100;
		a %= 100;
	}
	if (a >= 50) {
		counter += a/50;
		a %= 50;
	}
	if (a >= 10) {
		counter += a/10;
		a %= 10;
	}
	if (a >= 5) {
		counter += a/5;
		a %= 5;
	}
	if (a >= 1) {
		counter += a;
	}
	cout << counter << endl;
	}
	return 0;
}