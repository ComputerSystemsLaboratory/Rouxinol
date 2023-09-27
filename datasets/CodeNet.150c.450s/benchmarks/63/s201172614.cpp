#include<iostream>
#include<vector>
#include<queue>
#include<utility>
#include<algorithm>
#include<cstring>
#define INF 1000000000
#define pb push_back
#define mp make_pair 
using namespace std;
typedef struct e{
  int to,cost;
}edge;
vector<vector<edge> >E(100010);
int d[100010];
void dijkstra(int s){
  priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > >que;
  for(int i=0;i<100010;i++)
    d[i]=INF;
  d[s] = 0;
  que.push(pair<int,int>(0,s));
  while(!que.empty()){
    pair<int,int> p=que.top();que.pop();
    int v = p.second;
    if(d[v]<p.first)continue;
    for(int j=0;j<E[v].size();j++){
      edge t = E[v][j];
      if(d[t.to]>d[v]+t.cost){
	d[t.to]=d[v]+t.cost;
	que.push(pair<int,int>(d[t.to],t.to));
      }
    }
  }
}
int main(){
  int v,e,r;
  cin>>v>>e>>r;
  for(int i=0;i<e;i++){
    edge ed;
    int a,b,c;
    cin>>a>>b>>c;
    ed.to=b;ed.cost=c;
    E[a].push_back(ed);
  }
  dijkstra(r);
  for(int i=0;i<v;i++){
    if(d[i]==INF)
      cout<<"INF"<<endl;
    else 
      cout<<d[i]<<endl;
  }
  return 0;
}