#include <iostream>

using namespace std;

int main() {

	for (int i = 0; true; i++) {
		int x, y;
		cin >> x >> y;
		if (!(x | y))
			return 0;
		if (x > y)
			swap(x, y);
		cout << x << ' ' << y << endl;
	}

	return 0;

}