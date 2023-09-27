#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <stdio.h>
#define REP(i, n) for(int i = 0;i < n;i++)

using namespace std;

static const int N = 100;
static const int INFTY = (1 << 21);

int n, M[N][N];
int d[N];

void bfs(int s)
{
	queue<int>	q;
	q.push(s);
	REP(i, n)
		d[i] = INFTY;
	d[s] = 0;
	int u;

	while (!q.empty())
	{
		u = q.front();
		q.pop();
		REP(v, n)
		{
			if (M[u][v] == 0)
				continue;
			if (d[v] != INFTY)
				continue;
			d[v] = d[u] + 1;
			q.push(v);
		}
	}
	REP(i, n)
		cout << i + 1 << " " << ((d[i] == INFTY) ? (-1) : d[i]) << endl;
}

int main()
{
	int u, k, v;

	cin >> n;

	REP(i, n)
	{
		REP(j, n)
			M[n][n] = 0;
	}

	REP(i, n)
	{
		cin >> u >> k;
		u--;
		REP(j, k)
		{
			cin >> v;
			v--;
			M[u][v] = 1;
		}
	}



	bfs(0);
	return 0;
}