#include <queue>
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <numeric>

using namespace std;

using ll = long long;

#define REP(i,n) for(ll i=0;i<(ll)(n);i++)
#define REPD(i,n) for(ll i=n-1;i>=0;i--)
#define FOR(i,a,b) for(ll i=a;i<=(ll)(b);i++)
#define FORD(i,a,b) for(ll i=a;i>=(ll)(b);i--)

#define input(...) __VA_ARGS__; in(__VA_ARGS__)

#if __has_include("debugger.cpp")
  #include "debugger.cpp"
#else
void print() {
  std::cout << std::endl;
}

template <class Head, class... Tail>
void print(Head&& head, Tail&&... tail) {
  cout << head;
  if (sizeof...(tail) > 0) cout << " ";
  print(std::forward<Tail>(tail)...);
}
# endif

void in() { }

template <class Head, class... Tail>
void in(Head&& head, Tail&&... tail) {
  cin >> head;
  in(std::forward<Tail>(tail)...);
}

int main() {
  ll input(v, e, r);
  struct Node {
    ll to, cost;
  };
  vector<vector<Node>> graph(v);
  REP(i, e) {
    ll input(s, t, d);
    graph[s].push_back({t, d});
  }

  auto comp = [](Node& v1, Node& v2) {
    return v1.cost > v2.cost;
  };
  priority_queue<Node, vector<Node>, decltype(comp)> que{comp};
  vector<ll> visited(v, -1);
  que.push({r, 0});
  while (!que.empty()) {
    Node node = que.top();
    que.pop();
    if (visited[node.to] != -1) continue;
    visited[node.to] = node.cost;

    for (auto v: graph[node.to]) {
      que.push({v.to, node.cost + v.cost});
    }
  }

  for (auto v: visited) {
    if (v == -1) print("INF");
    else print(v);
  }
}

