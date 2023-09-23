#include<iostream>
using namespace std;

int main()
{
	int W = 0, H = 0, x = 0, y = 0, r = 0;
	cin >> W >> H >> x >> y >> r;
	if (x - r >= 0 && x + r <= W && y - r >= 0 && y + r <= H) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}