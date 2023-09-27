#include <cstdio>

#pragma warning(disable: 4996)

#define MAX_N 2000000
#define MAX_E 10001

int N, A[MAX_N], C[MAX_E], cnt;

int main()
{
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &A[i]);

		C[A[i]]++;
	}

	for (int i = 0; i < MAX_E; i++)
	{
		for (int j = 0; j < C[i]; j++)
		{
			if (cnt++) { printf(" "); }

			printf("%d", i);
		}
	}

	printf("\n");

	return 0;
}