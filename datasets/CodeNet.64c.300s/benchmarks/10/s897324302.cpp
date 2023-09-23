#include<iostream>

using namespace std;

int main() {
	int x, y;

	while (true) {
		cin >> x >> y;
		if (x + y) {
			if (x > y) {
				int tmp = x;
				x = y;
				y = tmp;
			}
			cout << x << " " << y << endl;
		}
		else
			break;
	}

	return 0;
}