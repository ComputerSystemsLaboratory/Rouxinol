#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <queue>

using namespace std;

using ll = long long;

#define REP(i,n) for(ll i=0;i<(ll)(n);i++)
#define REPD(i,n) for(ll i=n-1;i>=0;i--)
#define FOR(i,a,b) for(ll i=a;i<=(ll)(b);i++)
#define FORD(i,a,b) for(ll i=a;i>=(ll)(b);i--)

#define input(...) __VA_ARGS__; in(__VA_ARGS__)

template<class T>
void print(vector<T> a) {
  cout << "[ ";
  REP(i, a.size()) cout << a[i] << " ";
  cout << "]" << endl;
}

void print() {
  std::cout << std::endl;
}

template <class Head, class... Tail>
void print(Head&& head, Tail&&... tail) {
  std::cout << head << " ";
  print(std::forward<Tail>(tail)...);
}

void in() { }

template <class Head, class... Tail>
void in(Head&& head, Tail&&... tail) {
  cin >> head;
  in(std::forward<Tail>(tail)...);
}

int main() {
  ll input(n);
  vector<vector<ll>> graph(n);
  REP(i, n) {
    ll input(u, k);
    REP(j, k) {
      ll input(v);
      graph[u - 1].push_back(v - 1);
    }
  }

  vector<bool> visited(n);
  vector<ll> cost(n);
  queue<pair<ll, ll>> que;
  que.push({0, 0});
  while (!que.empty()) {
    pair<ll, ll> node = que.front();
    que.pop();

    if (!visited[node.first]) {
      cost[node.first] = node.second;
    }
    visited[node.first] = true;

    for(auto v: graph[node.first]) {
      if (!visited[v]) {
        que.push({v, node.second + 1});
      }
    }
  }
  REP(i, n) {
    if (!visited[i]) cost[i] = -1;
    cout << i + 1 << " " << cost[i] << endl;;
  }
}

