#include <iostream>
#include <string>
#include <unordered_map>
#include <stdio.h>
#include <list>
#include <vector>
#include <algorithm>
#include <stack>
#include <climits>
#include <queue>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; ++i)
typedef long long ll;



int main()
{
	int n;
	cin >> n;
	int m;
	cin >> m;
	vector <vector<int>> G(n);
	vector <int> color(n);

	rep(i,m)
	{
		int foo,fooo;
		cin >> foo >> fooo;
		//Sif(foo>fooo)swap(foo,fooo);
		G[foo].push_back(fooo);
		G[fooo].push_back(foo);
	}
	rep(i,n) color[i] = -1;
	queue<int> Q;
	rep(iii,n)
	{
		int v=-1;
		if(color[iii]==-1)v=iii;
		else continue;
		//cout<<v<<endl;
		color[v]=v;
		if(v!=-1)Q.push(v);
		while(!Q.empty())
		{
			int u = Q.front();
			color[u]=v;
			Q.pop();
			rep(i,G[u].size())
			{
				if(color[G[u][i]]==-1)Q.push(G[u][i]);
			}
		}
	}
	//rep(i,n)cout<<color[i]<<endl;
	int k;
	cin >> k;
	rep(i,k)
	{
		int foo,fooo;
		cin >> foo >> fooo;
		if(color[foo]==color[fooo])cout<<"yes"<<endl;
		else cout<<"no"<<endl;
	}
	return 0;
}
