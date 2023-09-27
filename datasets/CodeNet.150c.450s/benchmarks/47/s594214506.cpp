#include <stdio.h>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int w, h, x, y, r;
	int top, bot, rig, lef;

	cin >> w >> h >> x >> y >> r;

	top = y + r;
	bot = y - r;
	rig = x + r;
	lef = x - r;

	if (top > h || bot < 0 || rig > w || lef < 0)
	{
		printf("No\n");
	}
	else
	{
		printf("Yes\n");
	}

	return 0;
}