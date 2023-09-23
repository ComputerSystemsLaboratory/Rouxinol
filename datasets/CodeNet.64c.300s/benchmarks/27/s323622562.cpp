#define		_CRT_SECURE_NO_WARNINGS
#include <cstdio>

int main()
{
	int		n, x;

	for (;;)
	{
		scanf("%d %d", &n, &x);

		if ((n == 0) && (x == 0))
		{
			break;
		}

		if (x >= 3 * n)
		{
			printf("0\n");
		}
		else
		{
			int		div3 = x / 3;
			int		Cnt = 0;
			for (int i = 1; i < div3; i++)
			{
				int j = i + 1;
				for (; j < x / 2; j++)
				{
					int		sum12 = i + j;
					int		del = x - sum12;

					if (j >= del)
						break;

					if ((j <= n) && (del <= n))
						Cnt++;
				}
			}
			printf("%d\n", Cnt);
		}
	}

	return 0;
}