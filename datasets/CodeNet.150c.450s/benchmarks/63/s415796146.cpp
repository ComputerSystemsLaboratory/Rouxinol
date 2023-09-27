#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<climits>
#include<iostream>
#include<sstream>
#include<utility>
#include<map>
#include<vector>
#include<queue>
#include<algorithm>
#include<set>
#include<stack>
using namespace std;
typedef long long ll;
typedef pair<int,int>P;
int V,E,r,C[100000];
vector<P> G[100000];

void dij(int s)
{
	C[s]=0;
	priority_queue<P> Q;
	Q.push(make_pair(s,0));
	for(;!Q.empty();)
	{
		P t=Q.top();Q.pop();
		for(int i=0;i<G[t.first].size();i++)
		{
			if(C[G[t.first][i].first]>t.second+G[t.first][i].second)
			{
				C[G[t.first][i].first]=t.second+G[t.first][i].second;
				Q.push(make_pair(G[t.first][i].first,C[G[t.first][i].first]));
			}
		}
	}
}

int main()
{
	memset(C,0x7f,sizeof(C));
	scanf("%d%d%d",&V,&E,&r);
	for(int i=0;i<E;i++)
	{
		int s,t,d;
		scanf("%d%d%d",&s,&t,&d);
		G[s].push_back(make_pair(t,d));
		//G[t].push_back(make_pair(s,d));
	}
	dij(r);
	for(int i=0;i<V;i++)
	{
		if(C[i]==2139062143)puts("INF");
		else printf("%d\n",C[i]);
	}
	return 0;
}