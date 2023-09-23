#include<stdio.h>
#include<math.h>

int main()
{
	int a1, a2, a3, a4, b1, b2, b3, b4;
	while (scanf("%d %d %d %d %d %d %d %d", &a1, &a2, &a3, &a4, &b1, &b2, &b3, &b4) != EOF)
	{
		int hit = 0, blow = 0;
		if (a1 == b1)hit++;
		if (a2 == b2)hit++;
		if (a3 == b3)hit++;
		if (a4 == b4)hit++;

		if (a1 == b2)blow++;
		if (a1 == b3)blow++;
		if (a1 == b4)blow++;
		if (a2 == b1)blow++;
		if (a2 == b3)blow++;
		if (a2 == b4)blow++;
		if (a3 == b1)blow++;
		if (a3 == b2)blow++;
		if (a3 == b4)blow++;
		if (a4 == b1)blow++;
		if (a4 == b2)blow++;
		if (a4 == b3)blow++;

		printf("%d %d\n", hit, blow);

	}
	return 0;
}