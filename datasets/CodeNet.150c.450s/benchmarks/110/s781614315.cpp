#include <stdio.h>

bool syo[1000][1000];
bool sude[1000][1000];
int zi[1000][1000];
int kox[1000000];
int koy[1000000];
int kon;
int koxs[1000000];
int koys[1000000];
int kons;
int cx[10];
int cy[10];
int sx,sy;

int main()
{
	int h,w,n;
	scanf("%d %d %d",&h,&w,&n);
	for(int i = 0; i < h; i++)
	{
		char ww[1111];
		scanf("%s",ww);
		for(int ii = 0; ii < w; ii++)
		{
			if('1' <= ww[ii] && ww[ii] <= '9')
			{
				int d = ww[ii] - '1';
				cy[d] = i;
				cx[d] = ii;
			}
			if(ww[ii] == 'S')
			{
				sy = i;
				sx = ii;
			}
			if(ww[ii] == 'X')
			{
				syo[i][ii] = true;
			}
			else
			{
				syo[i][ii] = false;
			}
		}
	}
	int time = 0;
	int nx = sx;
	int ny = sy;
	for(int k = 0; k < n; k++)
	{
		for(int i = 0; i < h; i++)
		{
			for(int ii = 0; ii < w; ii++)
			{
				zi[i][ii] = 1000000;
				sude[i][ii] = false;
			}
		}
		zi[ny][nx] = 0;
		kox[0] = nx;
		koy[0] = ny;
		kon = 1;
		while(1)
		{
			kons = 0;
			for(int i = 0; i < kon; i++)
			{
				if(syo[koy[i]][kox[i]] || sude[koy[i]][kox[i]])
				{
					continue;
				}
				sude[koy[i]][kox[i]] = true;
				if(kox[i] == cx[k] && koy[i] == cy[k])
				{
					goto aa;
				}
				if(kox[i] > 0)
				{
					if(zi[koy[i]][kox[i] - 1] > zi[koy[i]][kox[i]])
					{
						zi[koy[i]][kox[i] - 1] = zi[koy[i]][kox[i]] + 1;
						koxs[kons] = kox[i] - 1;
						koys[kons] = koy[i];
						kons++;
					}
				}
				if(kox[i] < w - 1)
				{
					if(zi[koy[i]][kox[i] + 1] > zi[koy[i]][kox[i]])
					{
						zi[koy[i]][kox[i] + 1] = zi[koy[i]][kox[i]] + 1;
						koxs[kons] = kox[i] + 1;
						koys[kons] = koy[i];
						kons++;
					}
				}
				if(koy[i] > 0)
				{
					if(zi[koy[i] - 1][kox[i]] > zi[koy[i]][kox[i]])
					{
						zi[koy[i] - 1][kox[i]] = zi[koy[i]][kox[i]] + 1;
						koxs[kons] = kox[i];
						koys[kons] = koy[i] - 1;
						kons++;
					}
				}
				if(koy[i] < h - 1)
				{
					if(zi[koy[i] + 1][kox[i]] > zi[koy[i]][kox[i]])
					{
						zi[koy[i] + 1][kox[i]] = zi[koy[i]][kox[i]] + 1;
						koxs[kons] = kox[i];
						koys[kons] = koy[i] + 1;
						kons++;
					}
				}
			}
			for(int i = 0; i < kons; i++)
			{
				kox[i] = koxs[i];
				koy[i] = koys[i];
			}
			kon = kons;
		}
aa:
		time += zi[cy[k]][cx[k]];
		nx = cx[k];
		ny = cy[k];
	}
	printf("%d\n",time);
	return 0;
}