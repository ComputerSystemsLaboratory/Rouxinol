/*
* @Author: Samson
* @Date:   2018-05-07 21:12:41
* @Last Modified by:   Samson
* @Last Modified time: 2018-05-07 21:44:27
*/
//   @URL : 
#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<stack>
#include <cstdlib>
#define INF 0x3f3f3f3f
using namespace std;
typedef long long LL;
const int MAXN = 1e5+10;

int n,m,q,color[MAXN];
vector<int> v[MAXN];

void dfs(int x,int id)
{
	stack<int> s;
	int t;
	s.push(x);
	color[x] = id;
	while(s.size())
	{
		t = s.top();
		s.pop();
		for(int i = 0; i < v[t].size(); ++i)
		{
			int val = v[t][i];
			if(color[val] == -1)
			{
				color[val] = id;
				s.push(val);
			}
		}
	}
}

void fun()
{
	int id = 0;
	memset(color,-1,sizeof color);
	for(int i = 0; i < n; ++i)
		if(color[i] == -1)
			dfs(i,++id);
}

int main(void)
{
	ios::sync_with_stdio(false); 
	//cin.tie(0);
	cin>>n>>m;
	int s,e;
	for(int i = 0; i < m; ++i)
	{
		cin>>s>>e;
		v[s].push_back(e);
		v[e].push_back(s);
	}
	fun();
	cin>>q;
	while(q--)
	{
		cin>>s>>e;
		if(color[s] == color[e] && color[s]!=-1)
			cout<<"yes\n";
		else
			cout<<"no\n";
	}
	return 0;
}
