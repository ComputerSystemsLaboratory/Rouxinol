#include <algorithm>
#include <array>
#include <complex>
#include <cassert>
#include <cctype>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <memory>
#include <queue>
#include <set>
#include <string>
#include <tuple>
#include <vector>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;


typedef int Key;
typedef int Val;

const int MAX_V = 100000;
const Key INF = 1e9;

struct edge { Key to; Val cost; };

int V;
array<vector<edge>, MAX_V> G;
vector<Val> dist;

void addEdge(const Key& from, const Key& to, const Val& cost){
  G[from].push_back({to, cost});
}

void dijkstra(const Key& s){
  dist.resize(V);
  typedef pair<Key, Val> P;
  priority_queue<P, vector<P>, greater<P> > que;
  fill(dist.begin(), dist.end(), INF);
  dist[s] = 0;
  que.push(P(0, s));

  while(!que.empty()){
    const auto p = que.top(); que.pop();
    const auto v = p.second;
    if(dist[v] < p.first) continue;
    for(auto e : G[v]){
      if(dist[e.to] > dist[v] + e.cost){
        dist[e.to] = dist[v] + e.cost;
        que.push(P(dist[e.to], e.to));
      }
    }
  }
}

void iostream_init() {
  ios::sync_with_stdio(false); // stdin????????¨???????????????
  cin.tie(0); // cin?????????flush?????????
  cout.setf(ios::fixed);
  cout.precision(3); // ?????¨?????\?????????????????°??¨???
}

int main() {
  iostream_init();
  int E, r;
  cin >> V >> E >> r;
  for(int i = 0; i < E; ++i) {
    int s, t, d;
    cin >> s >> t >> d;
    addEdge(s, t, d);
  }
  dijkstra(r);
  for(auto d : dist){
    if(d == INF){
      cout << "INF" << endl;
    }else{
      cout << d << endl;
    }
  }

}