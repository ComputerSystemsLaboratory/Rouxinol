#include <iostream>


using namespace std;

int euclid(int, int);

int main(void) {
	int a, b, gcd;
	cin >> a >> b;

	cout << euclid(a, b) << "\n";

	return 0;
}

int euclid(int a, int b) {
	int r;
	while (1) {
		r = a % b;
		if (r == 0) {
			return b;
		}
		a = b;
		b = r;
	}
}