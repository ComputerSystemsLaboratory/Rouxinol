#include <iostream>
#include <stdio.h>
#include <string>
#include <map>
#include <stack>
#include <vector>
#include <string.h>
#include <set>
#include <queue>
#include <time.h>
#include <cmath>
#include <algorithm>

using namespace std;

int input[20][10010];
bool flipRow[20];

int main()
{
	int i , j , n , m;
	while (scanf("%d%d" , &n , &m) != EOF)
	{
		if (n == 0 && m == 0)
			break;

		int maxNum = - 1;

		for (i = 0;i < n;i ++)
			for (j = 0;j < m;j ++)
				scanf("%d" , &input[i][j]);

		for (int mask = 0;mask < (1 << n);mask ++)
		{
			int temp = 0;
			memset(flipRow , 0 , sizeof(flipRow));
			for (i = 0;i < n;i ++)
			{
				if (mask & (1 << i))
					flipRow[i] = true;
			}
			// ?????¬?????????
			for (j = 0;j < m;j ++)
			{
				int count1 = 0 , count0 = 0;
				for (i = 0;i < n;i ++)
				{
					if (input[i][j] == 1)
					{
						if (flipRow[i])
							count0 ++;
						else
							count1 ++;
					}
					else
					{
						if (flipRow[i])
							count1 ++;
						else
							count0 ++;
					}
				}
				temp = temp + max(count0 , count1);
			}
			if (temp > maxNum)
				maxNum = temp;
		}
		printf("%d\n" , maxNum);
	}
	return 0;
}