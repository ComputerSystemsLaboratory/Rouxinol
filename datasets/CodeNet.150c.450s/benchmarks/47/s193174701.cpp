#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int W, H, x, y, r;
	cin >> W >> H >> x >> y >> r;

	if (x <= 0 || y <= 0) {
		cout << "No" << endl;
		return 0;
	}

	bool left, right, up, down;
	left = (x - r) >= 0;
	right = (x + r) <= W;
	up = (y + r) <= H;
	down = (y - r) >= 0;

	if (left & right & up & down) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}

	return 0;
}
