#include <iostream>
using namespace std;

int main() {
	int W, H, x, y, r;
	cin >> W >> H >> x >> y >> r;
	
	bool isValid = true;
	isValid &= ((x >= -100) && (x <= 100));
	isValid &= ((y >= -100) && (y <= 100));
	isValid &= ((W > 0) && (W <= 100));
	isValid &= ((H > 0) && (H <= 100));
	isValid &= ((r > 0) && (r <= 100));
	
	if(isValid) {
		bool inRange = true;
		inRange &= ((x - r >= 0) && (x + r <= W));
		inRange &= ((y - r >= 0) && (y + r <= H));
		if(inRange) {
			cout << "Yes" << endl;
		} else {
			cout << "No" << endl;
		}
	}
}