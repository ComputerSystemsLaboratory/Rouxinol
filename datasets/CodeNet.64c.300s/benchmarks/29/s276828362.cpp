#include <iostream>
#include <cmath>

using namespace std;

void solve()
{
	int e;
	while(cin >> e, e)
	{
		int x = 0;
		int y = 0;
		int z = 0;
		while(pow((double)z, 3) < e)
		{
			++z;
		}
		int zbuf = 0;
		if(pow((double)z, 3) > e)
		{
			zbuf = z - 1;
		}
		else
		{
			zbuf = z;
		}
		int min = 100000000;
		int m = 0;
		for(int i = 0; i <= zbuf; ++i)
		{
			x = 0;
			y = 0;
			int ebuf = e;
			ebuf -= pow((double)i, 3);
			z = i;
			while(pow((double)y, 2) < ebuf)
			{
				++y;
			}
			if(pow((double)y, 2) > ebuf)
			{
				--y;
			}
			ebuf -= pow((double)y, 2);
			x = ebuf;
			if(min > x + y + z)
			{
				min = x + y + z;
			}
		}
		cout << min << endl;
	}
}

int main()
{
	solve();
	return(0);
}