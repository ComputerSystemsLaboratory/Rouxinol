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
int d[maxn+5];
bool visited[maxn+5];
int v,e,r;

struct Edge
{
  int cost,to;
  Edge(int _cost,int _to):cost(_cost),to(_to){}
};

vector<Edge> adj[maxn];
bool nega=false;
void bellman_ford(int n,int s)
{
  for(int i=0;i<n;i++)
  {
    d[i]=inf;
  }
  d[s]=0;
  for(int i=0;i<n;i++)
  {
    for(int v=0;v<n;v++)
    {
      for(int k=0;k<adj[v].size();k++)
      {
        Edge e=adj[v][k];
        if(d[v]!= inf && d[e.to]>d[v]+e.cost)
        {
          d[e.to]=d[v]+e.cost;
          if(i==n-1) 
          {
            nega=true;
            return;
          }
        }
      }
    }
  }
  return;
}


int main(void)
{
  cin >> v >> e>> r;
  for(int i=0;i<e;i++)
  {
    int s,t,d;
    cin >> s >> t >> d;
    adj[s].push_back(Edge(d,t));
    //Edge[t].push_back(P(d,s));
  }
  bellman_ford(v,r);
  if(nega)
  {
    cout << "NEGATIVE CYCLE" << endl;
    return 0;
  }
  else
  {
    for(int i=0;i<v;i++)
    {
      if(d[i]==inf)
      {
        cout << "INF" << endl;
      }
      else cout << d[i] << endl;
    }
  }
  return 0;
}

