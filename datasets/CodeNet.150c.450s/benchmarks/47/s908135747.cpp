#include <iostream>
#include <algorithm>
#include<vector>

using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	int w, h, x, y, r;
	cin >> w >> h >> x >> y >> r;
	if (r <= x&&r <= w - x&&r <= y&&r <= h - y) cout << "Yes\n";
	else cout << "No\n";
	return 0;
}