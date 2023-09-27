#include <iostream>
using namespace std;
int main() {
	int a, b, c, x, y, z;
	cin >> a >> b >> c;
	if (a>b) {
		x = b;
		y = a;
	} else {
		x = a;
		y = b;
	}
	if (y>c) {
		z = y;
		y = c;
	} else {
		z = c;
	}
	if (x>y) {
		cout << y << " " << x << " " << z << endl;
	} else {
		cout << x << " " << y << " " << z << endl;
	}
	return 0;
}
