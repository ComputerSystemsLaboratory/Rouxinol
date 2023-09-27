#define		_CRT_SECURE_NO_WARNINGS
#include <cstdio>

#define		BMAX		4
#define		FMAX		3
#define		RMAX		10

int main()
{
	int		n;
	scanf("%d", &n);
	int		univ[BMAX][FMAX][RMAX] = { 0 };

	int		b, f, r, v;

	for (int i = 0; i < n; i++)
	{
		scanf("%d %d %d %d", &b, &f, &r, &v);

		univ[b - 1][f - 1][r - 1] += v;
	}

	for (b = 0; b < BMAX; b++)
	{
		for (f = 0; f < FMAX; f++)
		{
			for (r = 0; r < RMAX; r++)
			{
				printf(" %d", univ[b][f][r]);
			}
			printf("\n");
		}
		if (b != BMAX - 1)
			printf("####################\n");
	}

	return 0;
}