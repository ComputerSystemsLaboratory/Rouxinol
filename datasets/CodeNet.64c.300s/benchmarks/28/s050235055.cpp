#include <iostream>
using namespace std;

int main() {
	int W, H, x, y, r;
	cin >> W >> H >> x >> y >> r;

	// 水平条件
	bool horizontal = x - r < 0 || x + r > W;
	// 垂直条件
	bool vertical = y - r < 0 || y + r > H;
	if (horizontal || vertical) {
		cout << "No" << endl;
	} else {
		cout << "Yes" << endl;
	}
}
