#include<iostream>
#include<algorithm>

using namespace std;

const int MAXN = 2005, INF = 1e9;
int d[MAXN], x[MAXN], y[MAXN], w[MAXN];
int n, m, r;

bool bellman_ford(int r)
{
	fill(d, d + n, INF);
	d[r] = 0;
	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
			d[y[j]] = min(d[y[j]], d[x[j]] + w[j]);
	for(int j = 0; j < m; j++)
		if(d[y[j]] > d[x[j]] + w[j] && d[y[j]] < INF / 10)
			return true;
	return false;
}

int main()
{
	cin >> n >> m >> r;
	for(int i = 0; i < m; i++)
		cin >> x[i] >> y[i] >> w[i];
	if(bellman_ford(r))
		cout << "NEGATIVE CYCLE" << endl;
	else
		for(int i = 0; i < n; i++)
			if(d[i] > INF / 10)
				cout << "INF" << endl;
			else
				cout << d[i] << endl;
	return 0;
}