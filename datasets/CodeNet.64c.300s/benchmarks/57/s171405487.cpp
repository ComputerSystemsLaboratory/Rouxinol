#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <bitset>

using namespace std;

bitset<10000> b[10];

int main()
{
	int h, w, i, j, k, n, num, re, max;
	while (scanf("%d%d", &h, &w) && (h || w))
	{
		for (i = max = 0; i < h; i++)
			for (j = 0; j < w; j++)
			{
				scanf("%d", &n);
				b[i][j] = n;
			}
		n = 1 << h;
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < h; j++)
				if (1 & (i >> j))
					b[j].flip();
			for (j = re = 0; j < w; j++)
			{
				for (k = num = 0; k < h; k++)
					if (b[k][j])
						num++;
				if (num < h - num)
					num = h - num;
				re += num;
			}
			if (re > max)
				max = re;
			for (j = 0; j < h; j++)
				if (1 & (i >> j))
					b[j].flip();
		}
		printf("%d\n", max);
	}
	return 0;
}