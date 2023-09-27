/*
* @Author: Samson
* @Date:   2018-06-12 18:24:44
* @Last Modified by:   Samson
* @Last Modified time: 2018-06-13 12:20:56
*/
//   @URL : http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_12_A
#include<bits/stdc++.h>
#include<algorithm>
#include <cstdlib>
#define INF 0x3f3f3f3f
using namespace std;
typedef long long LL;
const int MAXN = 1e2+10;

int p[MAXN],color[MAXN],a[MAXN][MAXN],t,n,d[MAXN];

int prim()
{
	int minv,u,v;
	memset(p,-1,sizeof p);
	memset(d,INF,sizeof d);

	d[1] = 0;

	while(1)
	{
		minv = INF;
		u = -1;
		for(int i = 1; i <= n; ++i)
		{
			if(minv > d[i] && !color[i])
				minv = d[i],u = i;
		}
		if(u == -1)	break;
		color[u] = 1;
		for(int v = 1; v <= n; ++v)
		{
			if(!color[v] && a[u][v] != INF)
			{
				if(d[v] > a[u][v])
				{
					d[v] = a[u][v];
					p[v] = u;
				}
			}
		}
	}
	
	int ans = 0;
	for(int i = 1; i <= n; ++i)
		if(p[i] != -1)
			ans += a[i][p[i]];
	return ans;
}

int main(void)
{
	ios::sync_with_stdio(false); 
	//cin.tie(0);
	cin>>n;
	for(int i = 1; i <= n; ++i)
	{
		for(int j = 1; j <= n; ++j)
		{
			cin>>t;
			a[i][j] = t==-1?INF:t;
		}
	}
	cout<<prim()<<'\n';
	return 0;
}
