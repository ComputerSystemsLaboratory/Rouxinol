#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <list>
#define black 0
#define red 1
#define white -1
#define maxn 110
using namespace std;

int tot = 0;
int book[maxn] = {}, t[maxn][2] = {};
list<int> map[maxn];

void dfs(int u)
{
	book[u] = red;
			t[u][0] = ++tot;
			for (list<int>::iterator it = map[u].begin(); it != map[u].end(); it++)
			{
				if (book[*it - 1] == black)
				{
					dfs(*it - 1);
				}
			}
			book[u] = white;
			t[u][1] = ++tot;
	return;
}
int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		int u, k, v;
		scanf("%d%d", &u, &k);
		u--;
		for (int i = 0; i < k; i++)
		{
			scanf("%d", &v);
			map[u].push_back(v);
		}
	}
	for (int i = 0; i < n; i++)
		if (book[i] == black)
			dfs(i);
	for (int i = 0; i < n; i++)
	{
		printf("%d %d %d\n", i + 1, t[i][0], t[i][1]);;
	}
	return 0;
}
