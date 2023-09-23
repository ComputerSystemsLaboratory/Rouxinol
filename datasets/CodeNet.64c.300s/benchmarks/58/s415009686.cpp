#include <iostream>
#include <stdio.h>
#include <string>
#include <map>
#include <stack>
#include <vector>
#include <string.h>
#include <set>
#include <queue>
#include <cmath>
#include <algorithm>

using namespace std;

bool vis[200][200];
char input[200][200];
int dx[4] = {- 1 , 0 , 1 , 0};
int dy[4] = {0 , 1 , 0 , - 1};

bool inArea(int x , int y , int n , int m)
{
	return x >= 0 && x < n && y >= 0 && y < m;
}

void dfs(int x , int y , int n , int m , char ch)
{
	vis[x][y] = true;

	for (int i = 0;i < 4;i ++)
	{
		int tx = x + dx[i];
		int ty = y + dy[i];
		if (inArea(tx , ty , n , m) && !vis[tx][ty] && input[tx][ty] == ch)
			dfs(tx , ty , n , m , ch);
	}
}

int main()
{
	int i , j , h , w;
	while (scanf("%d%d" , &h , &w) != EOF)
	{
		if (w == 0 && h == 0)
			break;

		int ans = 0;

		for (i = 0;i < h;i ++)
			for (j = 0;j < w;j ++)
				vis[i][j] = false;

		for (i = 0;i < h;i ++)
			scanf("%s" , input[i]);

		for (i = 0;i < h;i ++)
			for (j = 0;j < w;j ++)
			{
				if (!vis[i][j])
				{
					dfs(i , j , h , w , input[i][j]);
					ans ++;
				}
			}

		printf("%d\n" , ans);
	}
	return 0;
}