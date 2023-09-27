#include <iostream>
#include <stdio.h>

using namespace std;
typedef long long int lint;

bool inRectangle(int W, int H, int x, int y, int r)
{
	if (x - r < 0 || x + r > W || y - r < 0 || y + r > H) return false;
	return true;
}

void answer()
{
	int W, H, x, y, r;
	cin >> W >> H >> x >> y >> r;
	if (inRectangle(W, H, x, y, r)) cout << "Yes";
	else cout << "No";
	cout << endl;
}

int main()
{
	answer();
	return 0;
}