#include <cstdio>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int W, H, x, y, r;
	int left, right;
	int up, down;

	cin >> W >> H >> x >> y >> r;

	left = x - r;
	right = x + r;
	up = y + r;
	down = y - r;

	if (left >= 0 && right <= W && up <= H && down >= 0)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}

	return 0;
}