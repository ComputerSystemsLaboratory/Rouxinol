#include <iostream>
#include <vector>

using namespace std;
struct edge
{
	int from;
	int to;
	int cost;
};
int d[11][11];
static const int INF = 99999999;

void solve()
{
	int n;
	while(cin >> n, n)
	{
		for(int i = 0; i < 10; ++i)
		{
			for(int j = 0; j < 10; ++j)
			{
				d[i][j] = INF;
			}
			d[i][i] = 0;
		}
		for(int i = 0; i < n; ++i)
		{
			int from, to, dist;
			cin >> from >> to >> dist;
			d[from][to] = dist;
			d[to][from] = dist;
		}

		for(int k = 0; k < 10; ++k)
		{
			for(int i = 0; i < 10; ++i)
			{
				for(int j = 0; j < 10; ++j)
				{
					d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
				}
			}
		}

		int min_sum_dist = INF;
		int pos = 0;
		for(int i = 0; i < 10; ++i)
		{
			int sum = 0;
			for(int j = 0; j < 10; ++j)
			{
				if(d[i][j] != INF)
				{
					sum += d[i][j];
				}
			}
			if(sum == 0)
			{
				continue;
			}
			if(min_sum_dist > sum)
			{
				min_sum_dist = sum;
				pos = i;
			}
		}
		cout << pos << " " << min_sum_dist << endl;
	}
}

int main()
{
	solve();
	return(0);
}