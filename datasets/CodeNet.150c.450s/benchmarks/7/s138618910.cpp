#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#pragma warning(disable:4996)

int main()
{

	int MontainIn[10];

	for (int nCnt = 0; nCnt < 10; nCnt++)
		scanf("%d", &MontainIn[nCnt]);

	for (int nCnt = 0; nCnt < 10; nCnt++)
	{
		for (int nCnt2 = 0 ; nCnt2 < 10; nCnt2++)
		{
			if (nCnt2 == nCnt)
				continue;

			if (MontainIn[nCnt] > MontainIn[nCnt2])
			{
				MontainIn[nCnt] ^= MontainIn[nCnt2];
				MontainIn[nCnt2] ^= MontainIn[nCnt];
				MontainIn[nCnt] ^= MontainIn[nCnt2];
			}
		}
	}

	for (int nCnt = 0; nCnt < 3; nCnt++)
		printf("%d\n", MontainIn[nCnt]);

	return 0;
}