#include<bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i=0; i<n; i++)
#define INF 1000000000

typedef pair<int , int > P;

struct edge{
  int to, cost;
  edge(int to, int cost):
    to(to), cost(cost){}
};
struct vertex{
  vector<edge> E;
};

vertex V[100000];

int nv, ne;
int r;
int d[100000];

void dijkstra(int s){
  //?????????????????? first:???????????¢ second:??????
  priority_queue<P, vector<P>, greater<P> > que;
  fill(d, d+nv, INF);
  d[s]=0;
  que.push(P(0, s));

  while(!que.empty()){
    P p=que.top(); que.pop();
    int v=p.second;
    if(d[v]<p.first)continue;
    rep(i, V[v].E.size()){
      edge e=V[v].E[i];
      if(d[e.to]>d[v]+e.cost){
	d[e.to]=d[v]+e.cost;
	que.push(P(d[e.to], e.to));
      }
    }
  }
}

int main(){
  cin>>nv>>ne>>r;
  rep(i, ne){
    int s, d, c;
    cin>>s>>d>>c;
    V[s].E.push_back(edge(d, c));
  }
  dijkstra(r);
  rep(i,nv)
    if(d[i]==INF)cout<<"INF"<<endl;
    else cout<<d[i]<<endl;

  return 0;
}