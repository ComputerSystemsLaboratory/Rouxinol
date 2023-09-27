/**
 * 単一始点最短経路（負の重みあり）
 * ベルマン・フォード法
 * https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/all/GRL_1_B
 * */

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
//#define INF 1LL<<60 //使いやすい無限(ll)
#define INF 1'000'000'000'000'000'000

using Node = long long; //頂点
using Distance = long long; //距離
using Weight = long long; //重み

using Edge = tuple<Node, Node, Weight>;

ll V,E,r;
vector<Edge> Edges;
vector<Distance> dist;

bool BellmanFord(ll start){
  dist.assign(V, INF);
  dist[start] = 0;

  for(int i=1; i<V; i++){
    for(Edge x: Edges){
      Node s,t; Weight d;
      tie(s,t,d) = x;
      if(dist[s]==INF)continue; //距離無限ノードからの辺は考えない
      
      if(dist[s]+d < dist[t]){
        dist[t] = dist[s] + d;
      }

    }
  }

  bool NC = false;
  for(Edge x: Edges){
    Node s,t; Weight d;
    tie(s,t,d) = x;
    if(dist[s]==INF)continue; //距離無限ノードからの辺は考えない
    if(dist[s]+d < dist[t]){
      NC = true;
    }
  }

  return NC;
}

int main(){
  cin>>V>>E>>r;

  for(int i=0; i<E; i++){
    ll s,t,d;
    cin>>s>>t>>d;
    Edges.push_back(make_tuple(s,t,d));
  }

  bool isNcycle = BellmanFord(r);

  if(isNcycle){
    cout<<"NEGATIVE CYCLE"<<endl;
    return 0;
  }

  for(ll x: dist){
    if(x==INF){
      cout<<"INF"<<endl;
    }else{
      cout<<x<<endl;
    }
  }
}
