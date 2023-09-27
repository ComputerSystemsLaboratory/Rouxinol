#define _CRT_SECURE_NO_WARNINGS 1

#include <cstdio>

using namespace std;

int main()
{
	int W, N, A[31], B[31], C[31];

	scanf("%d", &W);
	scanf("%d", &N);

	for (int i = 1; i <= N; i++)
	{
		scanf("%d,%d", &(A[i]), &(B[i]));
	}

	for (int i = 1; i <= W; i++)
	{
		int t = i;

		for (int j = 1; j <= N; j++)
		{
			if (A[j] == t)
			{
				t = B[j];
			}
			else if (B[j] == t)
			{
				t = A[j];
			}
		}

		C[t] = i;
	}

	for (int i = 1; i <= W; i++)
	{
		printf("%d\n", C[i]);
	}

	return 0;
}