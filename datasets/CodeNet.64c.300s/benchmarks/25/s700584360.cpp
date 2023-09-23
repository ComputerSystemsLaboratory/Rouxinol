#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

#define max(a, b)  a > b ? a : b
#define min(a, b)  a < b ? a : b

int main()
{
	int A[4], B[4], C[2][10], HIT, BLOW;

	while (scanf("%d %d %d %d %d %d %d %d", &A[0], &A[1], &A[2], &A[3], &B[0], &B[1], &B[2], &B[3]) != EOF)
	{
		memset(C, 0, sizeof(C));

		HIT  = 0;
		BLOW = 0;

		for (int i = 0; i < 4; i++)
		{
			if (A[i] == B[i])
			{
				HIT += 1;
			}

			C[0][A[i]] += 1;
			C[1][B[i]] += 1;
		}

		for (int i = 0; i < 10; i++)
		{
			BLOW += min(C[0][i], C[1][i]);
		}

		BLOW -= HIT;
		
		printf("%d %d\n", HIT, BLOW);
	}

	return 0;
}