#include <iostream>
using namespace std;

int main(void) {
	int a, b, c, work, i;
	cin >> a >> b >> c;
	for (i = 0; i < 2; i++) {
		if (b > c) {
			work = b;
			b = c;
			c = work;
		}
		if (a > b) {
			work = a;
			a = b;
			b = work;
		}
	}
	cout << a << ' ' << b << ' ' << c << endl;
	return 0;
}