#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
	int n, i, j, k=1, wareru=0;
	int sosu[500000];
	sosu[0] = 2;
	for (i = 3; i < 1000000; i += 2)
	{
		wareru = 0;
		for (j = 3; j <= sqrt(i*1.0); j += 2)
		{
			if (i%j == 0)
			{
				wareru = 1;
				break;
			}
		}
		if (wareru == 0)
		{
			sosu[k++] = i;
		}
	}

	while (scanf("%d", &n) != EOF)
	{
		for (i = 0; (sosu[i] <= n) && (sosu[i] != NULL); i++);
		printf("%d\n", i);
	}
	return 0;
}