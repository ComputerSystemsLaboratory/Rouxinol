#include <iostream>

using namespace std;

int main(void) {
	int W, H, x, y, r;

	cin >> W >> H >> x >> y >> r;

	if ((W < (2 * r)) || (H < (2 * r))) {
		cout << "No" << endl;
	}
	else if ((y - r < 0) || (y + r > H) || (x - r < 0) || (x + r > W)) {
		cout << "No" << endl;
	}
	else {
		cout << "Yes" << endl;
	}

	return 0;
}