#include <iostream>
using namespace std;

int main()
{
	int W, H, x, y, r;
	do
	{
		cin >> W >> H >> x >> y >> r;
	} while (x < -100 || y < -100 || x > 100 || y > 100 ||  W <= 0 || H <= 0 || r <= 0 || W > 100 || H > 100 || r > 100);
	if (r <= x && r <= y && x <= W - r && y <= H - r)
		cout << "Yes" << endl;
	else if (x < r || y < r || W - r < x || H - r < y)
		cout << "No" << endl;
	return 0;
}