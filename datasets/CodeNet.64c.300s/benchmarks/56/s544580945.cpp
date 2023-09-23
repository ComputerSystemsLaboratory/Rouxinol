#include <stdio.h>

#pragma warning(disable : 4996)

int N, Y, M, D;

int main()
{
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &Y);
		scanf("%d", &M);
		scanf("%d", &D);

		if (Y == 0 && M == 0 && D == 0) break;

		int ret = 0;

		for (int i = 1; i < Y; i++)
		{
			if (i % 3 == 0)
			{
				ret += 200;
			}
			else
			{
				ret += 195;
			}
		}

		for (int i = 1; i < M; i++)
		{
			if (Y % 3 != 0 && i % 2 == 0)
			{
				ret += 19;
			}
			else
			{
				ret += 20;
			}
		}

		ret += D;

		printf("%d\n", 196471 - ret);
	}

	return 0;
}