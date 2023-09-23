#include <stdio.h>

int main()
{
	int i;
	int seed,max = 0;
	int data[100] = { 0 };
	int maxnum[100];
	while ((scanf("%d", &seed)) != EOF)
	{
		data[seed-1] += 1;
	}
	for (i = 0; i < 100; i++)
	{
		if (data[i] > max) max = data[i];
	}
	for (i = 0; i < 100; i++)
	{
		if (data[i] == max) printf("%d\n", i + 1);
	}
	return 0;
}