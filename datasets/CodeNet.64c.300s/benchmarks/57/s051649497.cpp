
#include <stdio.h>
#include <algorithm>

using namespace std;

template<class T>T pow2(T x_)
{
	if (x_ == 0)return 1;
	T ans = pow2(x_ / 2);
	return ans * ans * ((x_ % 2) ? 2 : 1);
}

int senflag[10][10000];

int main()
{
	for (;;)
	{
		int r, c;
		scanf("%d %d", &r, &c);
		if (r == 0 && c == 0)break;
		for (int y = 0; y < r; ++y)
		{
			for (int x = 0; x < c; ++x)
			{
				scanf("%d",&senflag[y][x]);
			}
		}
		auto limit = pow2(r);
		int ans = 0;
		for (int i = 0; i < limit; ++i)
		{
			int totnum = 0;
			for (int x = 0; x < c; ++x)
			{
				int colnum = 0;
				for (int y = 0; y < r; ++y)
				{
					if ((senflag[y][x]) ^ (i >> y & 1))
					{
						++colnum;
					}
				}
				totnum += max(colnum, r - colnum);
			}
			ans = max(ans, totnum);
		}
		printf("%d\n", ans);
		
	}
	return 0;
}