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

struct node
{
	int x;
	int y;
	int dist;

	node(int x , int y , int dist)
	{
		this -> x = x;
		this -> y = y;
		this -> dist = dist;
	}
};

bool vis[1010][1010];
char input[1010][1010];
int dx[4] = {- 1 , 0 , 1 , 0};
int dy[4] = {0 , 1 , 0 , - 1};
queue<node> q;

bool inArea(int x , int y , int n , int m)
{
	return x >= 0 && x < n && y >= 0 && y < m;
}

int solve(int sx , int sy , int h , int w , int n)
{
	while (!q.empty())
		q.pop();

	int value = 1;
	q.push(node(sx , sy , 0));
	vis[sx][sy] = true;

	while (!q.empty())
	{
		node no = q.front();
		q.pop();

		if (input[no.x][no.y] >= '0' && input[no.x][no.y] <= '9' && ((input[no.x][no.y] - '0') == value))
		{
			value ++;
			if (value == n + 1)
				return no.dist;

			while (!q.empty())
				q.pop();

			for (int i = 0;i < h;i ++)
				for (int j = 0;j < w;j ++)
					vis[i][j] = false;
			vis[no.x][no.y] = true;
		}
		for (int i = 0;i < 4;i ++)
		{
			int tx = no.x + dx[i];
			int ty = no.y + dy[i];
			if (inArea(tx , ty , h , w) && !vis[tx][ty] && input[tx][ty] != 'X')
			{
				vis[tx][ty] = true;
				q.push(node(tx , ty , no.dist + 1));
			}
		}
	}
	return - 1;
}

int main()
{
	int i , j , h , w , n;
	while (scanf("%d%d%d" , &h , &w , &n) != EOF)
	{
		for (i = 0;i < h;i ++)
			for (j = 0;j < w;j ++)
				vis[i][j] = false;

		int sx , sy;
		for (i = 0;i < h;i ++)
		{
			scanf("%s" , input[i]);
			for (j = 0;j < w;j ++)
			{
				if (input[i][j] == 'S')
				{
					sx = i;
					sy = j;
				}
			}
		}

		// ???S????§????
		printf("%d\n" , solve(sx , sy , h , w , n));
	}
	return 0;
}