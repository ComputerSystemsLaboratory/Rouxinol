#include <stdio.h>

#pragma warning(disable : 4996)

int a, b, c;

int main()
{
	while (true)
	{
		scanf("%d", &a);
		scanf("%d", &b);
		scanf("%d", &c);

		if (a == 0 && b == 0 && c == 0) break;

		int ret = 0;

		for (int i = 1; i <= 2000; i++)
		{
			for (int j = 1; j <= 2000; j++)
			{
				int s1 = i * (100 + a) / 100;
				int s2 = j * (100 + a) / 100;
				int t1 = i * (100 + b) / 100;
				int t2 = j * (100 + b) / 100;

				if (s1 + s2 == c)
				{
					ret = ret > (t1 + t2) ? ret : (t1 + t2);
				}
			}
		}

		printf("%d\n", ret);
	}

	return 0;
}