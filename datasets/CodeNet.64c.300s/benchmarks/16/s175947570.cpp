#include<stdio.h>
#include<math.h>

int max(int*, int);

int main()
{
	int n, i;
	scanf("%d", &n);
	int R[200001];
	for (i = 0; i <= n; i++)
	{
		scanf("%d", &R[i]);
	}
	printf("%d\n", max(R, n));

}


int max(int array[], int n)
{
	int r = 0, i = 0, k, biggest = 1, smallest = 1000000000, champion = -1000000000, challenger;
	while (1)
	{
		i = r;
		while (i <= n - 1)
		{

			if (i == r)
			{
				biggest = 1;
				i = r + 1;
			}
			if (array[i] >= biggest)
			{
				biggest = array[i];
				r = i;
			}
			i++;
		}
		for (k = 0; k <= r - 1; k++)
		{
			if (array[k] <= smallest) smallest = array[k];
		}
		challenger = biggest - smallest;
		if (champion <= challenger) champion = challenger;
		if (r == n - 1) break;
	}
	return champion;
}