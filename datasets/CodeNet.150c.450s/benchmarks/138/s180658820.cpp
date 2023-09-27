#include <iostream>

using namespace std;

int main() {
	int x, y, t;
	cin >> x;
	cin >> y;

	while (y > 0) {
		t = y;
		y = x % y;
		x = t;
	}
	cout << x << endl;

	return 0;
}