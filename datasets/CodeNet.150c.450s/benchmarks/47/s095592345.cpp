#include <iostream>

using namespace std;

int W, H, x, y, r;

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	cin >> W >> H >> x >> y >> r;

	if (x + r > W || x - r < 0 || y + r > H || y - r < 0) {
		cout << "No" << "\n";
	}
	else {
		cout << "Yes" << "\n";
	}

	return 0;
}