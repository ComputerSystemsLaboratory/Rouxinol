#include<bits/stdc++.h>
using namespace std;
#define ver first
#define val second
const int M=1e5;
const int INF=1e9;
vector<pair<int,int> >g[M];
set<pair<int,int> >edge;
int n,m,dis[M],b;
bool mark[M];
void input()
{
  cin>>n>>m>>b;
  for(int i=0;i<m;i++)
    {
      int u,v,w;
      cin>>u>>v>>w;
      g[u].push_back(make_pair(v,w));
    }
}
void update(int v)
{
  mark[v]=true;
  for(int i=0;i<g[v].size();i++)
    if(!mark[g[v][i].ver] && dis[v]+g[v][i].val < dis[g[v][i].ver])
      {
		edge.erase(make_pair(dis[g[v][i].ver],g[v][i].ver));
		dis[g[v][i].ver]=dis[v]+g[v][i].val;
		edge.insert(make_pair(dis[g[v][i].ver],g[v][i].ver));
      }
}
void dijkstra(int v)
{
  fill(dis,dis+n+1,INF);
  dis[v]=0;
  update(v);
  for(int i=1;i<n;i++)
  {
	pair<int,int>e=*edge.begin();
    update(e.second);
	edge.erase(e);
  }
}
int main()
{
  input();
  dijkstra(b);
  for(int i=0;i<n;i++)
	if(dis[i]==INF)
		cout<<"INF"<<endl;
	else
		cout<<dis[i]<<endl;
  return 0;
}