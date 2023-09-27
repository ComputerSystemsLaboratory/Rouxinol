#include<stdio.h>
void insertionSort(int*, int);

int main()
{
	int A[101], N, n;
	scanf("%d", &N);
	for (n = 0; n <= N - 1; n++) scanf("%d", &A[n]);
	insertionSort(A, N);
	return 0;
}

void insertionSort(int*a, int n)
{
	int x;
	for (x = 0; x <= n - 2; x++)
		printf("%d ", a[x]);
	printf("%d\n", a[n - 1]);
	int i, j, k;
	for (i = 1; i <= n - 1; i++)
	{
		j = 0;
		while (j <= i - 1)
		{
			k = a[i];
			if (a[i]<a[j])
			{
				a[i] = a[j];
				a[j] = k;
			}
			j++;
		}

		for (x = 0; x <= n - 2; x++) printf("%d ", a[x]);
		printf("%d\n", a[n - 1]);
	}

}