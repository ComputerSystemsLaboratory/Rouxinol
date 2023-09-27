/*
* @Author: Samson
* @Date:   2018-06-14 14:39:51
* @Last Modified by:   Samson
* @Last Modified time: 2018-06-14 15:04:58
*/
//   @URL : http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_12_B
#include<bits/stdc++.h>
#include<algorithm>
#include<queue>
#include <cstdlib>
#define INF 0x3f3f3f3f
using namespace std;
typedef long long LL;
const int MAXN = 1e5+10;

int n,color[105],d[105];
vector<pair<int,int> > a[105];

void dijkstra()
{
	priority_queue<pair<int,int> > que;
	memset(color,0,sizeof color);
	memset(d,INF,sizeof d);
	d[0] = 0;
	que.push(make_pair(0,0));
	while(que.size())
	{
		pair<int,int> p = que.top();
		que.pop();
		int u = p.second;
		color[u] = 1;

		if(d[u] < p.first*(-1))	continue;

		for(int i = 0; i < a[u].size(); ++i)
		{
			int v = a[u][i].first;
			if(color[v])	continue;
			if(d[v] > d[u]+a[u][i].second)
			{
				d[v] = d[u]+a[u][i].second;
				que.push(make_pair(d[v]*(-1),v));
			}
		}
	}
	for(int i = 0; i < n; ++i)
		cout<<i<<' '<< (d[i]==INF?-1:d[i])<<'\n';
}
int main(void)
{
	ios::sync_with_stdio(false); 
	//cin.tie(0);
	cin>>n;
	int u,k,v,w;
	for(int i = 0; i < n; ++i)
	{
		cin>>u>>k;
		for(int j = 0; j < k; ++j)
		{
			cin>>v>>w;
			a[u].push_back(make_pair(v,w));
		}
	}
	dijkstra();
	return 0;
}
