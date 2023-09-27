#include<iostream>

using namespace std;

const int MAXN = 1005, INF = 2e9;
int d[MAXN][MAXN];

int main()
{
	int n, m;
	cin >> n >> m;
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			d[i][j] = INF;
	for(int i = 0; i < n; i++)
		d[i][i] = 0;
	for(int i = 0; i < m; i++)
	{
		int x, y, w;
		cin >> x >> y >> w;
		d[x][y] = w;
	}
	for(int k = 0; k < n; k++)
		for(int i = 0; i < n; i++)
			for(int j = 0; j < n; j++)
				if(d[i][k] < INF && d[k][j] < INF)
					d[i][j] = min(1ll * d[i][j], 1ll * d[i][k] + d[k][j]);
	for(int i = 0; i < n; i++)
		if(d[i][i] < 0)
		{
			cout << "NEGATIVE CYCLE" << endl;
			return 0;
		}
	for(int i = 0; i < n; i++, cout << endl)
		for(int j = 0; j < n; j++)
		{
			if(d[i][j] == INF)
				cout << "INF";
			else
				cout << d[i][j];
			if(j < n - 1)
				cout << ' ';
		}
	return 0;
}