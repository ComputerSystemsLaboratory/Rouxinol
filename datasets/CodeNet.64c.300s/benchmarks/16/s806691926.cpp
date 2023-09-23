#include<stdio.h>

int main()
{
	int n		= 0;
	int curR	= 0;
	int maxR	= 0;
	int minR	= 1000000000;
	int difR	= 0;
	int difRmax = maxR - minR;

	scanf("%d", &n);
	scanf("%d", &minR);
	for (int i = 1; i < n; ++i)
	{
		scanf("%d", &curR);
		difR = curR - minR;
		if (difR > difRmax)
			difRmax = difR;

		if (curR < minR)
			minR = curR;
	}
	printf("%d\n", difRmax);
	return 0;
}