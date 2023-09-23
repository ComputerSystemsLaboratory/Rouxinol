#include <iostream>

using namespace std;

int main() {
	int x, y;
	while (cin >> x >> y) {
		if (x == y && x == 0)
			break;

		if (max(x, y) != y)
			swap(x, y);

		cout << x << " " << y << endl;
	}
}