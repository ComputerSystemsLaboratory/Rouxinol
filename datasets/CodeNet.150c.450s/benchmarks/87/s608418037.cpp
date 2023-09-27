#include <cstdio>
#include <iostream>
using namespace std;

int H, sum, zero;
bool update;
int array[11][5];

int main()
{
	do
	{
		cin >> H;
		if (H == 0)break;
		for (int i = H - 1; i >= 0; i--)
			for (int j = 0; j < 5; j++)
				cin >> array[i][j];
		sum = 0;
		do
		{
			update = false;
			for (int i = 0; i < H; i++)
			{
				if (array[i][2] == 0)
					break;
				if (array[i][2] == array[i][0] && array[i][2] == array[i][1])
				{
					if (array[i][2] != array[i][3])
					{
						sum += array[i][2] * 3;
						array[i][0] = 0;
						array[i][1] = 0;
						array[i][2] = 0;
						update = true;
					}
					else if (array[i][2] != array[i][4])
					{
						sum += array[i][2] * 4;
						array[i][0] = 0;
						array[i][1] = 0;
						array[i][2] = 0;
						array[i][3] = 0;
						update = true;
					}
					else
					{
						sum += array[i][2] * 5;
						array[i][0] = 0;
						array[i][1] = 0;
						array[i][2] = 0;
						array[i][3] = 0;
						array[i][4] = 0;
						update = true;
					}
				}
				else if (array[i][2] == array[i][1] && array[i][2] == array[i][3])
				{
					if (array[i][2] != array[i][4])
					{
						sum += array[i][2] * 3;
						array[i][1] = 0;
						array[i][2] = 0;
						array[i][3] = 0;
						update = true;
					}
					else
					{
						sum += array[i][2] * 4;
						array[i][1] = 0;
						array[i][2] = 0;
						array[i][3] = 0;
						array[i][4] = 0;
						update = true;
					}
				}
				else if (array[i][2] == array[i][3] && array[i][2] == array[i][4])
				{
					sum += array[i][2] * 3;
					array[i][2] = 0;
					array[i][3] = 0;
					array[i][4] = 0;
					update = true;
				}
			}
			if (!update)break;
			for (int j = 0; j < 5; j++)
			{
				for (zero = 0; zero < H - 1; zero++)
					if (array[zero][j] == 0)
						break;
				for (int search = zero + 1; search < H; search++)
					if (array[search][j]>0)
					{
						array[zero][j] = array[search][j];
						array[search][j] = 0;
						zero++;
					}
			}
		} while (true);
		cout << sum << endl;
	} while (true);
	return 0;
}