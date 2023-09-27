#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
#define rep(i,s,e) for(int (i) = (s);(i) <= (e);(i)++)
#define all(x) x.begin(),x.end()

template<class T>
struct d_heap {
  int d;
  vector<T> heap;

  d_heap(int d): d(d) {}
  void push(const T& t) {
    heap.push_back(t);

    int i = heap.size() - 1;
    while(i > 0){
      if(heap[(i - 1) / 2] > heap[i]) swap(heap[(i - 1) / 2], heap[i]);
      i = (i - 1) / 2;
    }
  }

  T pop() {
    T ans = heap[0];
    swap(heap.back(), heap.front());
    heap.pop_back();
    for(int i = 1;i < heap.size() && i <= d;i++) {
      if(heap[0] > heap[i]) swap(heap[0], heap[i]);
    }
    return ans;
  }

  bool empty() const {
    return heap.empty();
  }

  T top() {
    return heap[0];
  }
};
#include <vector>
#include <queue>
#include <set>
using namespace std;
 
struct edge{
  int to;
  int cost;
};
int INF = 1 << 30;
using Pii = pair<int,int>;
 
vector<int> Dijkstra(const vector<vector<edge>>& G,int s){
  vector<int> dist(G.size(),INF);
  dist[s] = 0;
  d_heap<Pii> que(3);
  que.push({dist[s],s});
  while(!que.empty()){
    auto d = que.top().first;
    auto v = que.top().second;
    que.pop();
    if(dist[v] < d) continue;
    for(auto & e : G[v]){
      if(dist[e.to] > d + e.cost){
        dist[e.to] = d + e.cost;
        que.push({dist[e.to],e.to});
      }
    }
  }
  return dist;
}
 
#include <iostream>
 
int main(){
  int v,e,r;
  cin >> v >> e >> r;
  vector<vector<edge>> G(v);
  for(int i = 0;i < e;i++){
    int s,t,d;
    cin >> s >> t >> d;
    G[s].push_back({t,d});
  }
  auto res = Dijkstra(G,r);
  for(auto i : res){
    if(i == INF) cout << "INF";
    else cout << i;
    cout << endl;
  }
}


