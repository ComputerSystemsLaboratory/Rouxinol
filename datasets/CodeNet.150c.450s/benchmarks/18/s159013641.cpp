#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#pragma warning(disable:4996)

int main()
{

	int Debt = 100000;
	int Weeks = 0;
	scanf("%d", &Weeks);

	for (int nCnt = 0; nCnt < Weeks; nCnt++)
	{
		Debt += Debt * 0.05f;
		if (Debt % 1000 > 0)
			Debt += 1000 - (Debt % 1000);
	}

	printf("%d\n", Debt);

	return 0;
}