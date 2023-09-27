#include <iostream>
#include <string>

using namespace std;

int main() {
	for (;;) {
		int x;
		int y;
		cin >> x >> y;
		if (x == 0 && y == 0) break;
		if (x > y) {
			int a = x;
			int x = y;
			int y = a;
			cout << x << " " << y << endl;
		}
		else {
			cout << x << " " << y << endl;
		}
	}
	return 0;
}

