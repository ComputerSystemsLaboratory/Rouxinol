#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
	int InpNum = 0, l = 0;


	while (cin >> InpNum >> l)
	{
		int TempNum1[10] = { 0 };
		int TempNum3[30] = { 0 };

		int tmp1 = 0, tmp2 = 0, tmp3 = 0;


		if (InpNum == 0 && l == 0) { break; }

		tmp1 = InpNum;
		TempNum3[0] = InpNum;

		for (int i = 0; i < 10; i++)
		{
			tmp2 = (int)(tmp1 / 10) * 10;
			tmp3 = tmp1 - tmp2;

			TempNum1[i] = tmp3;

			tmp1 = (int)(tmp1 / 10);
			if (tmp1 == 0) { break; }
		}


		for (int j = 0; j <= 20; j++)
		{

			int TempNum2[10] = { 0 };
			int n = 0;


			sort(TempNum1, TempNum1 + l);

			for (int i = l; i > 0; i--)
			{
				TempNum2[i] = TempNum2[i] + TempNum1[n] - TempNum1[i - 1];

				if (TempNum2[i] < 0)
				{
					TempNum2[i] = TempNum2[i] + 10;
					TempNum2[i - 1] = TempNum2[i - 1] - 1;
				}

				n = n + 1;
			}

			for (int i = 0; i<l; i++)
			{
				int h = 1;
				TempNum1[i] = TempNum2[i + 1];
				TempNum3[j + 1] = TempNum3[j + 1] + TempNum2[i + 1] * (int)pow(10.0, (double)(l - i - 1));
			}
		}

		int cnt = 0;

		for (int j = 0; j <= 20; j++)
		{
			if (cnt == 1) { break; }

			for (int i = 0; i <= 20; i++)
			{
				if (i == j) {}
				else
				{
					if (TempNum3[j] == TempNum3[i])
					{
						printf("%d %d %d\n", j, TempNum3[i], i - j);
						cnt = cnt + 1;
						break;
					}
				}
			}
		}
	}

	return 0;
}