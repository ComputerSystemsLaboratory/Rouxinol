#include<iostream>
#include<queue>
using namespace std;
const int MAXN = 105;
const int INF = 1<<21;
int a[105][105];
int d[MAXN];
int n;


void bfs(int s)
{
	for(int i = 0; i < n; i++)
	{
		d[i] = INF;
	}
	queue<int> q;
	q.push(s);
	d[s] = 0;
	
	int u;
	while(!q.empty())
	{
		u = q.front(); q.pop();
		for(int v = 0; v < n; v++)
		{
			if(d[v] != INF)
				continue;
			if(a[u][v] == 0)
				continue;
			d[v] = d[u] + 1;
			q.push(v);
		}
	}
	
	for(int i = 0; i < n; i++)
	{
		if(d[i] != INF)
			cout << i+1 << " " << d[i] << endl;
		else
			cout << i+1 << " " << -1 << endl;
	}
}

int main ()
{
	int u, v, k;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> u >> k;
		u--;
		for(int j = 0; j < k; j++)
		{
			cin >> v;
			v--;
			a[u][v] = 1;
		}
	}
	bfs(0);
	return 0;
}
