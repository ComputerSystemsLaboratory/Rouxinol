#include<cstdio>
#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;
#define MP make_pair
long long int map[1002][1002], mmap[1002][1002], tai = 1;
int main()
{
	int n, w, h, s,x,y,siz,cnt=0,flg=0;
	char c[2002];
	pair<int, int> q;
	queue<pair<int,int> > que;
	queue<int>quec;
	quec.push(0);
	scanf("%d %d %d", &h, &w, &n);
	for (int i = 1; i <= h; i++)
	{
		scanf("%s", c);
		for (int j = 1; j <= w; j++)
		{

			if (c[j - 1] == 'S')
			{
				que.push(MP(i, j));
			}
			if (c[j-1] == 'X')
				map[i][j] = -1;
			s = c[j-1];
			if (s > 48 && s < 58)
				map[i][j] = s - 48;
		}
	}
	for (int i = 0; i <= h + 1; i++)
	{
		map[i][0] = -1;
		map[i][w + 1] = -1;
	}
	for (int i = 0; i <= w + 1; i++)
	{
		map[0][i] = -1;
		map[h + 1][i] = -1;
	}
/*	for (int i = 0; i <= h + 3; i++)
	{
		for (int j = 0; j <= w + 3; j++)
		{
			printf("%2lld", map[i][j]);
		}
		cout << endl;
	}*/
	while (!que.empty())
	{
		x = que.front().first;
		y = que.front().second;
		flg = 0;
		cnt = quec.front();
		quec.pop();
		que.pop();
		mmap[x][y] = -1;
		if (map[x - 1][y] != -1&&mmap[x-1][y]!=-1&&flg==0)
		{
			que.push(MP(x - 1, y));
			quec.push(cnt + 1);
			mmap[x - 1][y] = -1;
			if (map[x - 1][y] == tai)
			{
				flg = 1;
				tai++;
				for (int i = 1; i <= h; i++)
				{
					for (int j = 1; j <= w; j++)
					{
						mmap[i][j] = 0;
					}
				}
				while (que.size() > 1)
				{
					que.pop();
					quec.pop();
				}
			}
		}
		if (map[x][y+1] != -1 && mmap[x][y+1] != -1&&flg==0)
		{
			que.push(MP(x , y+1));
			quec.push(cnt + 1);
			mmap[x][y+1] = -1;
			if (map[x][y+1] == tai)
			{
				flg = 1;
				tai++;
				for (int i = 1; i <= h; i++)
				{
					for (int j = 1; j <= w; j++)
					{
						mmap[i][j] = 0;
					}
				}
				while (que.size() > 1)
				{
					que.pop();
					quec.pop();
				}
			}

		}
		if (map[x+1][y] != -1 && mmap[x+1][y] != -1&&flg==0)
		{
			que.push(MP(x + 1, y));
			quec.push(cnt + 1);
			mmap[x+1][y] = -1;
			if (map[x+1][y] == tai)
			{
				flg = 1;
				tai++;
				for (int i = 1; i <= h; i++)
				{
					for (int j = 1; j <= w; j++)
					{
						mmap[i][j] = 0;
					}
				}
				while (que.size() > 1)
				{
					que.pop();
					quec.pop();
				}
			}
		}
		if (map[x][y-1] != -1 && mmap[x][y-1] != -1&&flg==0)
		{
			que.push(MP(x , y-1));
			quec.push(cnt + 1);
			mmap[x][y-1] = -1;
			if (map[x][y-1] == tai)
			{
				flg = 1;
				tai++;
				for (int i = 1; i <= h; i++)
				{
					for (int j = 1; j <= w; j++)
					{
						mmap[i][j] = 0;
					}
				}
				while (que.size() > 1)
				{
					que.pop();
					quec.pop();
				}
			}
		}
		if (tai == n + 1)
			break;
	}
	printf("%d\n", quec.front());
	return 0;
}