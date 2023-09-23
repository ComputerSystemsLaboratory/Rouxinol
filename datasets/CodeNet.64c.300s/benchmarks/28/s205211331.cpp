#include <iostream>

using namespace std;

int main() {
	int W, H, x, y, r;
	cin >> W >> H >> x >> y >> r;
	if (0 <= (x - r) && 0 <= (y - r) && (x + r) <= W && (y + r) <= H)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}