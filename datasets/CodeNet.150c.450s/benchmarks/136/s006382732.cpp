#include <iostream>
using namespace std;

int main() {
	unsigned long a, b, mod, big, small;
	while (cin >> a >> b) {
		if (a > b) {
			int stock = a;
			a = b;
			b = stock;
		}
		big = a;
		small = b;
		while (a % b != 0) {
			mod = a % b;
			a = b;
			b = mod;
		}
		cout << b << " " << big / b * small << endl;
	}
}