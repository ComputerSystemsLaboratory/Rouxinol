#include <bits/stdc++.h>
using namespace std;

int main()
{
	int w, h, x, y, r;
	cin >> w >> h >> x >> y >> r;
		if (w >= (x + r) && h >= (y + r) && !(x <0) && !(y < 0))
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
	cout << endl;
	return 0;
}