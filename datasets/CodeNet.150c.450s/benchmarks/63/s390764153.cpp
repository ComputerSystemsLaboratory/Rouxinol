#include <iostream>
#include <limits.h>
#include <queue>
#define MAX 100000
#define INF INT_MAX
using namespace std;

class Edge{
public:
  int to,cost;
  Edge(int t,int c){to=t; cost=c;}
};

typedef pair<int,int> P;

vector<Edge> G[MAX+1];
int V,E;
int d[MAX+1];
void solve(int r){

  fill(d,d+MAX+1,INF);
  
  priority_queue<P,vector<P>,greater<P> > qu;

  qu.push(P(0,r));
  d[r]=0;
  
  while(!qu.empty()){

    P p=qu.top();
    qu.pop();
    int v=p.second;

    if(d[v]<p.first) continue;
    for(int i=0;i<G[v].size();i++){
      Edge *e=&G[v][i];
      if(d[v]+e->cost < d[e->to]){
	d[e->to]=d[v]+e->cost;
	qu.push(P(d[e->to],e->to));
      }
    }
  }
  
}



int main(){

  int r;
  cin>>V>>E>>r;
  int s,t,c;
  for(int i=0;i<E;i++){
    cin>>s>>t>>c;
    Edge e1(t,c);
    G[s].push_back(e1);

  }

  solve(r);
  for(int i=0;i<V;i++){
    if(d[i]==INF)cout<<"INF"<<endl;
    else cout<<d[i]<<endl;
  }
  return 0;
}