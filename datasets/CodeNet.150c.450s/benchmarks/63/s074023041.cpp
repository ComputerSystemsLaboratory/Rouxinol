#include<iostream>
#include<set>
#include<vector>

#define F first
#define S second
#define PB push_back
#define pii pair<int, int>

using namespace std;

const int MAXN = 100005, INF = 1e9;
int d[MAXN];
vector<pii > v[MAXN];
set<pii > s;

void dijkstra(int n, int r)
{
	fill(d, d + n, INF);
	d[r] = 0;
	for(int i = 0; i < n; i++)
		s.insert({d[i], i});
	while(s.size())
	{
		int x = s.begin()->S;
		s.erase(s.begin());
		if(d[x] == INF)
			return;
		for(auto y : v[x])
			if(d[x] + y.S < d[y.F])
			{
				s.erase({d[y.F], y.F});
				d[y.F] = d[x] + y.S;
				s.insert({d[y.F], y.F});
			}
	}
}

int main()
{
	int n, m, r;
	cin >> n >> m >> r;
	for(int i = 0; i < m; i++)
	{
		int x, y, w;
		cin >> x >> y >> w;
		v[x].PB({y, w});
	}
	dijkstra(n, r);
	for(int i = 0; i < n; i++)
		if(d[i] == INF)
			cout << "INF" << endl;
		else
			cout << d[i] << endl;
	return 0;
}