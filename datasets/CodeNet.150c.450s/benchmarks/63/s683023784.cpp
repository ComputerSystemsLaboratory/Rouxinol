#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<vector>
#include<string>
#include<sstream>
#include<iomanip>
#include<utility>
#include<cmath>
#include<set>
#include<list>
#include<queue>
#include<stack>
#include<map>
#include<set>
using namespace std;
typedef long long int ll;
const int MAX=100000;
const int INFTY=1<<30;

int n,col[MAX],d[MAX];
vector<pair<int,int>> Q[MAX];//target,weight

void dijkstra(int s)
{
	priority_queue<pair<int,int>> PQ;//weight,id
	for(int i=0;i<n;i++)
	{
		d[i]=INFTY;
		col[i]=0;
	}
	d[s]=0;
	PQ.push(make_pair(0,s));
	col[s]=1;
	
	while(!PQ.empty())
	{
		pair<int,int> f=PQ.top();PQ.pop();
		int u=f.second;
		col[u]=2;
		if(d[u]<f.first*(-1))continue;
		for(int j=0;j<Q[u].size();j++)
		{
			int v=Q[u][j].first;
			if(col[v]==2)continue;
			if(d[u]+Q[u][j].second<d[v])
			{
				d[v]=d[u]+Q[u][j].second;
				PQ.push(make_pair(d[v]*(-1),v));
				col[v]=1;
			}
		}
	}
	
	for(int i=0;i<n;i++)
	{
		if(d[i]==INFTY)cout<<"INF"<<endl;
		else cout<<d[i]<<endl;
	}
	
	return;
}

int main()
{
	cin>>n;
	int u;int m;cin>>m>>u;
	int s,t,w;
	for(int i=0;i<m;i++)
	{
		cin>>s>>t>>w;
		Q[s].push_back(make_pair(t,w));
	}
	dijkstra(u);
	return 0;
}