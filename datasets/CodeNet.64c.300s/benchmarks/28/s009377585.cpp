#include <iostream>

using namespace std;

int main() {
	int W, H, x, y, r;
	cin >> W >> H >> x >> y >> r;
	if (x < r || y < r|| x > W - r || y > H - r)
		cout << "No" << endl;
	else
		cout << "Yes" << endl;
	return 0;
}