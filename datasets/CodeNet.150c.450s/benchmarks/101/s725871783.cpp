#include <cstdio>
#include <vector>
#include <stack>
#include <cstring>
using namespace std;
#define MAXN 100000
#define NIL -1

int n;
vector<int> G[MAXN];
int color[MAXN];

void dfs(int r, int c)
{
	stack<int> S;
	S.push(r);
	color[r] = c;
	while(!S.empty())
	{
		int u = S.top();
		S.pop();
		for(int i = 0; i < G[u].size(); i++)
		{
			int v = G[u][i];
			if(color[v] == NIL)
			{
				color[v] = c;
				S.push(v);
			}
		}
	}
}

void assignColor()
{
	int cid = 1;
	memset(color, -1, sizeof(color));
	for(int i = 0; i < n; i++)
	{
		if(color[i] == NIL)
		{
			dfs(i, cid++);
		}
	}
	
}

int main()
{
	int m, q;
	scanf("%d%d", &n, &m);
	int s, t;
	for(int i = 0; i < m; i++)
	{
		
		scanf("%d%d", &s, &t);
		G[s].push_back(t);
		G[t].push_back(s);
	}
	assignColor();
	scanf("%d", &q);
	for(int i = 0; i < q; i++)
	{
		scanf("%d%d", &s, &t);
		if(color[s] == color[t])
		{
			printf("yes\n");
		}
		else
		{
			printf("no\n");
		}
	}
	return 0;
}
