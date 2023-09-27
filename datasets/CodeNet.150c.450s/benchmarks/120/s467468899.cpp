#include <stdio.h>
#include <iostream>

using namespace std;

int d[10][10000];

int main()
{
	while(1)
	{
		int r,c;
		scanf("%d%d",&r,&c);
		if(r == 0 && c == 0)
		{
			break;
		}
		for(int i = 0; i < r; i++)
		{
			for(int ii = 0; ii < c; ii++)
			{
				scanf("%d",&d[i][ii]);
			}
		}
		int maxw = 0;
		for(int i = 0; i < (1 << r); i++)
		{
			int now = 0;
			for(int ii = 0; ii < c; ii++)
			{
				int w = 0;
				for(int j = 0; j < r; j++)
				{
					if(0 == (i & (1 << j)))
					{
						if(d[j][ii] == 0)
						{
							w++;
						}
					}
					else
					{
						if(d[j][ii] != 0)
						{
							w++;
						}
					}
				}
				now += max(w,r - w);
			}
			maxw = max(maxw,now);
		}
		printf("%d\n",maxw);
	}
	return 0;
}