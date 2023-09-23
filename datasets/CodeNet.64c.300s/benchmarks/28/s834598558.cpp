#include <iostream>
using namespace std;

int main() {
	int X, Y, x, y, r;
	cin >> X >> Y >> x >> y >> r;

	if (x + r <= X && x - r >= 0 && y + r <= Y && y - r >= 0) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}
}