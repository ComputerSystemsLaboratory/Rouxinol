#include <stdio.h>
#include <string.h>
#include <algorithm>

using namespace std;

#pragma warning(disable : 4996)

const int dx[4] = { -1, 0, 1, 0 };
const int dy[4] = { 0, -1, 0, 1 };

int n, r, d; int p[401][401];

int main()
{
	while (true)
	{
		scanf("%d", &n);

		if (n == 0) break;

		memset(p, -1, sizeof(p));

		p[200][200] = 0;

		for (int i = 0; i < n - 1; i++)
		{
			scanf("%d", &r);
			scanf("%d", &d);

			for (int j = 0; j < 401; j++)
			{
				for (int k = 0; k < 401; k++)
				{
					if (p[j][k] == r)
					{
						p[j + dy[d]][k + dx[d]] = i + 1;
					}
				}
			}
		}

		int minx = 999, maxx = -1, miny = 999, maxy = -1;

		for (int j = 0; j < 401; j++)
		{
			for (int k = 0; k < 401; k++)
			{
				if (p[j][k] != -1)
				{
					minx = min(minx, k);
					maxx = max(maxx, k);
					miny = min(miny, j);
					maxy = max(maxy, j);
				}
			}
		}

		printf("%d %d\n", maxx - minx + 1, maxy - miny + 1);
	}

	return 0;
}