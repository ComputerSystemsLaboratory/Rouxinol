#include <iostream>
#include <limits.h>
#include <queue>
#define V_MAX 10000
#define INF INT_MAX
using namespace std;

class Edge{
public:
  int to,cost;
  Edge(int t,int c){to=t; cost=c;}
};

typedef pair<int,int> P;

vector<Edge> G[V_MAX+1];
int V,E;
int mincost[V_MAX+1];
bool used[V_MAX+1];

int solve(){

  fill(mincost,mincost+V_MAX+1,INF);
  fill(used,used+V_MAX+1,false);
  
  priority_queue<P,vector<P>,greater<P> > qu;
  int res=0;

  qu.push(P(0,0));
  
  while(!qu.empty()){

    P p=qu.top();
    qu.pop();
    int v=p.second;
    
    if(used[v]) continue;
    used[v]=true;
    res+=p.first;
    
    for(int i=0;i<G[v].size();i++){
      Edge e=G[v][i];
      if(!used[e.to]) qu.push(P(e.cost,e.to));
    }
  }
  return res;
}



int main(){

  
  cin>>V>>E;
  int s,t,c;
  for(int i=0;i<E;i++){
    cin>>s>>t>>c;
    Edge e1(t,c),e2(s,c);
    G[s].push_back(e1);
    G[t].push_back(e2);

  }

  cout<<solve()<<endl;
  
  return 0;
}