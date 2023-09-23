#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
	int w, h, x, y, r;
	cin >> w >> h >> x >> y >> r;
	if (r <= x && x + r <= w) {
		cout << ((r <= y && y + r <= h)?"Yes":"No") << endl;
	} else {
		cout << "No" << endl;
	}
}