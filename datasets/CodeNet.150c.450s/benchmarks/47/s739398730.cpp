#include <iostream>
#include <string>
#include <algorithm>
#include <utility>

using namespace std;

int main()
{
	int w, h, x, y, r;
	cin >> w >> h >> x >> y >> r;
	pair<int, int> xy[4] = { {x - r,y - r},{x - r,y + r},{x + r,y - r},{x + r,y + r} };
	for (int i = 0; i < 4; i++)
	{
		if (!(xy[i].first >= 0 && xy[i].first <= w && xy[i].second >= 0 && xy[i].second <= h))
		{
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;

	return 0;
}