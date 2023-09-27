#include <iostream>
#include <string>
using namespace std;

int main() {
	int x, y, d;
	cin >> x >> y;
	while (1) {
		if (x == y) {
			d = x;
			break;
		}
		if (x > y) {
			x = x % y;
			if (x == 0) {
				d = y;
				break;
			}
		}
		if (x < y) {
			y = y % x;
			if (y == 0) {
				d = x;
				break;
			}
		}
	}
	cout << d << endl;

	return 0;
}