#include <iostream>

using namespace std;

void solve()
{
	int W, H, x, y, r;
	cin >> W >> H >> x >> y >> r;
	bool flag = false;
	if (0 <= x - r && x - r <= W && 0 <= x + r && x + r <= W && 
		0 <= y - r && y - r <= H && 0 <= y + r && y + r <= H)
	{
		flag = true;
	}
	if (flag)
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}
}

int main()
{
	solve();
	return(0);
}