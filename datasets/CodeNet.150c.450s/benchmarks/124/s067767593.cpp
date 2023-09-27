#include<iostream>
#include<cstdio>
#include<algorithm>
#define Lens 101
#define Inf 1<<22

using namespace std;
int N;
int w[Lens][Lens],p[Lens],d[Lens];
char c[Lens];

void dijkstra()
{
	d[0] = 0;
	while (true)
	{
		int u = -1;
		int minv = Inf;
		for (int i = 0; i < N; i++)
		{
			if (c[i] == 'w'&&minv > d[i])
			{
				minv = d[i];
				u = i;
			}
		}
		if (u == -1) break;
		c[u] = 'b';
		for (int v = 0; v < N; v++)
		{
			if (c[v] == 'w'&&w[u][v] != Inf)
				d[v] = min(d[v], w[u][v]+d[u]);
		}
	}
}

int main()
{
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		c[i] = 'w';
		d[i] = Inf;
		p[i] = -1;
		int u,n;
		cin >> u >> n;
		for (int j = 0; j < n; j++)
		{
			int v, tw;
			cin >> v >> tw;
			w[u][v] = tw;
		}
	}
	for(int i=0;i<N;i++)
		for (int j = 0; j < N; j++)
		{
			if (w[i][j] == 0)
				w[i][j] = Inf;
		}
	dijkstra();
	for (int i = 0; i < N; i++)
		cout << i <<' '<< d[i] << endl;
	return 0;
}
