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

struct Node {
  ll node, cost;
};

int main() {
  ll input(v, e);
  vector<vector<ll>> graph(v, vector<ll>(v, 1ll << 60));
  REP(i, e) {
    ll input(s, t, d);
    graph[s][t] = d;
  }
  REP(i, v) graph[i][i] = 0;

  REP(k, v) REP(s, v) REP(g, v) {
    graph[s][g] = min(graph[s][g], graph[s][k] + graph[k][g]);
  }
  REP(k, v) REP(s, v) REP(g, v) {
    if (graph[s][g] > graph[s][k] + graph[k][g]) {
      print("NEGATIVE CYCLE");
      return 0;
    }
  }
  auto f = [](ll x){
    if (x >= 1ll << 50) return string("INF");
    else return to_string(x);
  };
  REP(i, v) {
    REP(j, v) {
      if (j == 0) cout << f(graph[i][j]);
      else cout << " " << f(graph[i][j]);
    }
    cout << endl;
  }
}

