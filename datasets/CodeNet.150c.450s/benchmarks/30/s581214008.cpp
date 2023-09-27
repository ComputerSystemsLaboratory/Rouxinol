#include<stdio.h>

int main()
{
	int N;
	scanf("%d", &N);
	int A[101], element;
	for (element = 0; element <= N - 1; element++)
	{
		scanf("%d ", &A[element]);
	}

	int i, j, k, l, m = 0, mini;
	for (i = 0; i <= N - 2; i++)
	{
		l = 0;
		mini = i;
		for (j = i; j <= N - 1; j++)
		{
			if (A[j] < A[mini])
			{
				mini = j;
				l = 1;
			}
		}
		if (l == 1)
		{
			k = A[i];
			A[i] = A[mini];
			A[mini] = k;
			m++;
		}
	}

	for (i = 0; i <= N - 2; i++)
	{
		printf("%d ", A[i]);
	}
	printf("%d\n", A[N - 1]);
	printf("%d\n", m);
	return 0;

}