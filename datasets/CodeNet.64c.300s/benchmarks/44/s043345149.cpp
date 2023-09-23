#include <stdio.h>
#include <string.h>
#define INF 0x3f3f3f
#define M 
int map[15][15], sum;

int min(int a, int b)
{
	return a < b ? a : b;
}
int zdl(int start)
{
	int list[13];
	bool next[13];
	memset(next, false, sizeof(next));
	for(int i=0; i<=sum; i++)
	{
		list[i] = map[start][i];
	}
	next[start] = true;
	int ans = 0, st = INF;
	for(int i=0; i<=sum; i++)
	{
		int k;
		st = INF;
		for(int j=0; j<=sum; j++)
		{
			if(!next[j])
			{
				if(st > list[j])
				{
					st = list[j];
					k = j;
				}
			}
		}
		next[k] = true;
		for(int j=0; j<=sum; j++)
		{
			if(st + map[k][j] < list[j])
			{
				list[j] = st + map[k][j];
			}
		}
	}
	for(int i=0; i<=sum; i++)
	{
		ans += list[i];
	}
	return ans;
}
int main()
{
	int n, m, a, b, s;
	while(scanf("%d", &n) != EOF && n)
	{
		sum = 0;
		for(int i=0; i<13; i++)
		{
			for(int j=0; j<13; j++)
			{
				if(i == j)
					map[i][j] = 0;
				else
					map[i][j] = INF;
			}
		}
		for(int i=0; i<n; i++)
		{
			scanf("%d%d%d", &a, &b, &s);
			if(sum < a)	sum = a;
			if(sum < b)	sum = b;
			if(map[a][b] > s)
			{
				map[a][b] = map[b][a] = s;
			}
		}
		int ans = INF, k;
		for(int i=0; i<=sum; i++)
		{
			int ww = zdl(i);
			if(ans > ww)
			{
				ans = ww;
				k = i;
			}
		}
		printf("%d %d\n", k, ans);
	}
	
	return 0;
}