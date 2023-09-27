#include <iostream>
#include <string>
using namespace std;

int main()
{
	int w, h, x, y, r;
	cin >> w >> h >> x >> y >> r;

	string flag = "Yes";
	// right, upper, left, under
	if (w < (x + r) || h < (y + r) || 0 > (x - r) || 0 > (y - r)) {
		flag = "No";
	}
	cout << flag << "\n";
	return 0;
}