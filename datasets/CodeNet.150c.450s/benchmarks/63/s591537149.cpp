#include <iostream>
#include <queue>
#include <vector>
#define INF 1000000000000

using namespace std;
using llong = long long;
using P = pair<llong,int>;
vector<P> graph[100000];
llong dist[100000];

int main(){
  int n,m,r;

  cin >> n >> m >> r;
  for(int i=0;i<m;++i){
    int s,t,d;
    cin >> s >> t >> d;
    graph[s].emplace_back(d,t);
  }

  priority_queue<P,vector<P>,greater<P>> q;

  for(int i=0;i<n;++i){
    dist[i] = INF;
    q.push(P(0,r));
  }

  while(!q.empty()){
    auto p = q.top();q.pop();
    int v = p.second;
    llong w = p.first;
    if(dist[v]!=INF) continue;
    dist[v] = w;
    for(auto &next_p:graph[v]){
      int next_v = next_p.second;
      if(dist[next_v]!=INF) continue;
      q.push(P(w+next_p.first,next_v));
    }
  }

  for(int i=0;i<n;++i){
    if(dist[i]!=INF){
      cout << dist[i] << endl;
    }else{
      cout << "INF" << endl;
    }
  }

}