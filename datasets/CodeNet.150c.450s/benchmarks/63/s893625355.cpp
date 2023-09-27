#include<iostream>
#include<algorithm>
#include<queue>
#include<vector>
#include<string>
#include<cstring>
using namespace std;
const int inf=1e9+5;
const int maxn=100000;
typedef vector<int> vi;
typedef long long ll;
#define fi first
#define se second
typedef pair<int,int> P;
vector<pair<int,int> > Edge[maxn+5];
int d[maxn+5];
bool visited[maxn+5];
int v,e,r;

void dijkstra(int s)
{
  memset(visited,false,sizeof(visited));
  for(int i=0;i<maxn+5;i++)
  {
    d[i]=inf;
  }
  priority_queue<P,vector<P>,greater<P> > que;
  d[s]=0;
  que.push(P(0,s));
  while(!que.empty())
  {
    P f=que.top();que.pop();
    int u=f.se;
    visited[u]=true;
    if(d[u]<f.fi) continue;
    for(int j=0;j<Edge[u].size();j++)
    {
      int v=Edge[u][j].se;
      if(visited[v]) continue;
      if(d[v]>d[u]+Edge[u][j].fi)
      {
        d[v]=d[u]+Edge[u][j].fi;
        que.push(P(d[v],v));
      }
    }
  }
  for(int i=0;i<v;i++)
  {
    if(d[i]==inf)
    {
      cout << "INF" << endl;
    }
    else
    {
      cout << d[i] << endl;
    }
  }
}

int main(void)
{
  cin >> v >> e>> r;
  for(int i=0;i<e;i++)
  {
    int s,t,d;
    cin >> s >> t >> d;
    Edge[s].push_back(P(d,t));
    //Edge[t].push_back(P(d,s));
  }
  dijkstra(r);
}
