#include <stdio.h>

int main()	{

	int m, nmin, nmax, curr, next, res, gap, gapmax;

	while (true)	{

		scanf("%d %d %d", &m, &nmin, &nmax);

		if (m == 0)	{ break; }

		gapmax = -1;
		gap = -1;

		// res番目の点数を入力したところで、
		// res-1番目が合格するかどうか明らかになる
		for (int i = 1; i <= m; i++)	{

			if (i == 1)	{
				scanf("%d", &next);
				///
				//printf("1banme\n");
				///
				continue;
			}

			curr = next;
			scanf("%d", &next);

			if (i <= nmin)	{
				///
				//printf("hidarisugi\n");
				///
				continue;
			} else if	(i > nmax + 1)	{
				///
				//printf("migisugi\n");
				///
				continue;
			}

			gap = curr - next;

			if (gap >= gapmax)	{
				///
				//printf("ギャップが大きい\n");
				///
				gapmax = gap;
				res = i - 1;
			}
		}

		printf("%d\n", res);
	}

	return 0;
}
