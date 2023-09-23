#define		_CRT_SECURE_NO_WARNINGS
#include <cstdio>

int main()
{
	int		n;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		if ((i % 3) == 0)
		{
			printf(" %d", i);
		}
		else
		{
			int	a = i;
			int b, c;

			while (a != 0)
			{
				b = a / 10;
				c = b * 10;

				if ((a - c) == 3)
				{
					printf(" %d", i);
					break;
				}
				a = b;
			}
		}
	}
	printf("\n");

	return 0;
}