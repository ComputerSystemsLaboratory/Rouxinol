#include <iostream>

using namespace std;

int main() {
	int x, y;
	cin >> x >> y;
	while (x || y) {
		if (x > y)
			swap(x, y);
		cout << x << " " << y << endl;
		cin >> x >> y;
	}
	return 0;
}