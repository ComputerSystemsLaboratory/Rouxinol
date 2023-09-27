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

const int MAX_V = 100000;
const int INF = 1e9;

struct edge { int to, cost; };
int V;
array<vector<edge>, MAX_V> G;

typedef int Key;
typedef int Val;

vector<Val> dist;

void dijkstra(Key s){
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

int main() {
  int E, r;
  cin >> V >> E >> r;
  for(int i = 0; i < E; ++i) {
    int s, t, d;
    cin >> s >> t >> d;
    G[s].push_back({t, d});
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