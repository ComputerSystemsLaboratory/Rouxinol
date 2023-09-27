#include <iostream>
#include <string>
using namespace std;

int main() {
	int W, H, x, y, r;
	
	cin >> W >> H >> x >> y >> r;

	if (x - r >= 0 && x - r <= W - 2*r) {
		if (y - r >= 0 && y - r <= H - 2 * r) {
			cout << "Yes" << endl;
		}
		else {
			cout << "No" << endl;
		}
	}
	else {
		cout << "No" << endl;
	}
}