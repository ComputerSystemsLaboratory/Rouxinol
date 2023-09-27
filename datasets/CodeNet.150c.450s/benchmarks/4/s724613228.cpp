#define		_CRT_SECURE_NO_WARNINGS
#include <cstdio>

#define		NIL		(-1)

int main()
{
	int		m, f, r;

	for (;;)
	{
		scanf("%d %d %d", &m, &f, &r);

		if ((m == NIL) && (f == NIL) && (r == NIL))
		{
			break;
		}

		if ((m == NIL) || (f == NIL))
		{
			printf("F\n");
		}
		else
		{
			int sum = m + f;

			if (sum >= 80)
			{
				printf("A\n");
			}
			else if (sum >= 65)
			{
				printf("B\n");
			}
			else if (sum >= 50)
			{
				printf("C\n");
			}
			else if (sum >= 30)
			{
				if (r >= 50)
				{
					printf("C\n");
				}
				else
				{
					printf("D\n");
				}
			}
			else
			{
				printf("F\n");
			}
		}
	}

	return 0;
}