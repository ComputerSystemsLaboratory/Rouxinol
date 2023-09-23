
#include <stdio.h>

int main()
{
	int i;
	int mark[2] = { 0 };
	int a, b, n;
	while ((scanf("%d", &n)) != EOF)
	{
		mark[0] = 0; mark[1] = 0;
		if (n == 0) break;
		for (i = 0; i < n; i++)
		{
			if (scanf("%d%d", &a, &b) == EOF) break;
			if (a < b) mark[1] += (a + b);
			else if (a > b) mark[0] += (a + b);
			else {
				mark[1] += a; mark[0] += a;
			}
		}
		printf("%d %d\n", mark[0], mark[1]);
	}
	return 0;
}