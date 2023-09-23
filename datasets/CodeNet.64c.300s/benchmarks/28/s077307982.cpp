#include <iostream>
#include <string>
#include <utility>
#include <algorithm>

using namespace std;

string func(bool b)
{
	return b ? "Yes" : "No";
}


int main()
{
	int w, h, x, y, r;
	cin >> w >> h >> x >> y >> r;

	bool b = (0 <= x - r) && (x + r <= w);
	b &= (0 <= y - r) && (y + r <= h);

	cout << func(b) << endl;
	return 0;
}