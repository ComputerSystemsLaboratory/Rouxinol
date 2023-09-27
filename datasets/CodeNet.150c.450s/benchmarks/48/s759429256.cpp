#include <stdio.h>
#include <algorithm>

using namespace std;

int e;

int main()
{
	while (true)
	{
		scanf("%d", &e);

		if (e == 0) break;

		int ret = 999999999;

		for (int y = 0; y * y <= e; y++)
		{
			for (int z = 0; y * y + z * z * z <= e; z++)
			{
				int x = e - (y * y + z * z * z);

				ret = min(ret, x + y + z);
			}
		}

		printf("%d\n", ret);
	}
}