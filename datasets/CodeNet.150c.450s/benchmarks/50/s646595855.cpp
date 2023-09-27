#include <iostream>
using namespace std;
int main() {
	while (true) {
		int a, b = 0;
		cin >> a;
		if (a == 0)
			break;
		a = 1000 - a;
		if (a >= 500) {
			a = a - 500;
			b = b + 1;
		}
		b = b + a / 100;
		a = a % 100;
		if (a >= 50) {
			a = a - 50;
			b = b + 1;
		}
		b = b + a / 10;
		a = a % 10;
		if (a >= 5) {
			a = a - 5;
			b = b + 1;
		}
		b = b + a;
		cout << b << endl;
	}
	return 0;
}