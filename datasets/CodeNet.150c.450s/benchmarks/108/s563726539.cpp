#include<bits/stdc++.h>

using namespace std;

#define rep(a, b) for(int i = a; i <= b; i++)
#define mst(a) memset(a, 0, sizeof(a))
#define mem(a, p) memset(a, p, sizeof(a))

const int MAX = 1e2 + 10;


bool mtx[MAX][MAX];
int vis[MAX];
int n;

queue<int> q;

void init(void)
{
	while(!q.empty())
		q.pop();
	mem(vis, -1);
	return;
}

bool check(int x, int y)
{
	if(mtx[x][y] && vis[y] == -1)
		return true;
	return false;
}

void Bfs(void)
{
	int cnt = 1;
	q.push(1);
	vis[1] = 0;
	while(!q.empty())
	{
		int cur = q.front();
		q.pop();
		rep(1, n)
		{
			if(check(cur, i))
			{
				q.push(i);
				vis[i] = vis[cur] + 1;
				cnt++;
				if(cnt == n)
					return;
			}
		}
	}
	return;
}

int main()
{
	while(~scanf("%d", &n))
	{
		init();
		rep(1, n)
		{
			int row;
			scanf("%d", &row);
			int num;
			scanf("%d", &num);
			while(num--)
			{
				int tmp;
				scanf("%d", &tmp);
				mtx[row][tmp] = true;
			}
		}
		
		Bfs();
		
		rep(1, n)
			printf("%d %d\n", i, vis[i]);
	}
	return 0;
}

