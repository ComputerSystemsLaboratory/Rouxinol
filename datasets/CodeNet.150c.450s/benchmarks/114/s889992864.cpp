/*
* @Author: Samson
* @Date:   2018-06-12 18:24:44
* @Last Modified by:   Samson
* @Last Modified time: 2018-06-13 11:59:44
*/
//   @URL : http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_12_A
#include<bits/stdc++.h>
#include<algorithm>
#include <cstdlib>
#define white 0
#define gray 1
#define black 2
#define INF 0x3f3f3f3f
using namespace std;
typedef long long LL;
const int MAXN = 1e3+10;

int p[MAXN],color[MAXN],a[MAXN][MAXN],t,n,d[MAXN];

int prim()
{
	int minv,u,v;
	for(int i = 0; i < n; ++i)
	{
		d[i] = INF;
		p[i] = -1;
		color[i] = white;
	}
	
	d[0] = 0;

	while(1)
	{
		minv = INF;
		u = -1;
		for(int i = 0; i < n; ++i)
		{
			if(minv > d[i] && color[i] != black)
				minv = d[i],u = i;
		}
		if(u == -1)	break;
		color[u] = black;
		for(int v = 0; v < n; ++v)
		{
			if(color[v] != black && a[u][v] != INF)
			{
				if(d[v] > a[u][v])
				{
					d[v] = a[u][v];
					p[v] = u;
					color[v] = gray;
				}
			}
		}
	}
	int ans = 0;
	for(int i = 0; i < n; ++i)
		if(p[i] != -1)
			ans += a[i][p[i]];
	return ans;
}

int main(void)
{
	ios::sync_with_stdio(false); 
	//cin.tie(0);
	cin>>n;
	for(int i = 0; i < n; ++i)
	{
		for(int j = 0; j < n; ++j)
		{
			cin>>t;
			a[i][j] = t==-1?INF:t;
		}
	}
	cout<<prim()<<'\n';
	return 0;
}
