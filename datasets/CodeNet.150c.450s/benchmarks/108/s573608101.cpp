#include <iostream>
#include <iomanip> // << fixed << setprecision(xxx)
#include <algorithm> // do { } while ( next_permutation(A, A+xxx) ) ;
#include <vector>
#include <string> // to_string(nnn) // substr(m, n) // stoi(nnn)
#include <complex>
#include <tuple> // get<n>(xxx)
#include <queue>
#include <stack>
#include <map> // if (M.find(key) != M.end()) { }
#include <set> // S.insert(M);
// if (S.find(key) != S.end()) { }
// for (auto it=S.begin(); it != S.end(); it++) { }
// auto it = S.lower_bound(M);
#include <random> // random_device rd; mt19937 mt(rd());
#include <cctype>
#include <cassert>
#include <cmath>
#include <cstdio>
#include <cstdlib> // atoi(xxx)
using namespace std;

#define DEBUG 0 // change 0 -> 1 if we need debug.
// insert #if<tab> by my emacs. #if DEBUG == 1 ... #end

typedef long long ll;

// const int dx[4] = {1, 0, -1, 0};
// const int dy[4] = {0, 1, 0, -1};

// const int C = 1e6+10;
// const ll M = 1000000007;

class Edge {
public:
  int src, dst, cost;
  Edge(int s, int d, int c)
    : src(s), dst(d), cost(c) {}
  friend bool operator<(const Edge& x, const Edge& y) {
    return x.cost < y.cost;
  }
};

typedef Edge State;

class Graph {
public:
  int N;
  vector<Edge>* V;
  // dfs, bfs
  int* visited;
  int* from;
  int time;
  int* time_d;
  int* time_f; // dfs
  int* dist;

  Graph(int n)
    : N(n), time(0) {
    V = new vector<Edge>[N];
    from = new int[N];
    time_d = new int[N];
    time_f = new int[N];
    visited = new int[N];
    fill(visited, visited+N, 0);
    dist = new int[N];
  }
  ~Graph() {
    delete[] V;
    delete[] from;
    delete[] time_d;
    delete[] time_f;
    delete[] visited;
    delete[] dist;
  }

  void add_edge(int src, int dst, int cost = 1) {
    V[src].push_back(Edge(src, dst, cost));
  }

  void dfs(int start) {
    stack<State> S;
    S.push(State(-1, start, 0));
    while (!S.empty()) {
      State s = S.top();
      S.pop();
      if (visited[s.dst] == 0) {
        visited[s.dst] = 1;
        time_d[s.dst] = time++;
        from[s.dst] = s.src;
        dist[s.dst] = s.cost;
        S.push(s);
        for (auto x : V[s.dst]) {
          if (visited[x.dst] == 0) {
            S.push(State(s.dst, x.dst, s.cost + x.cost));
          }
        }
      } else if (visited[s.dst] == 1) {
        visited[s.dst] = 2;
        time_f[s.dst] = time++;
      }
    }
  }

  void bfs(vector<int> start) {
    queue<State> Q;
    for (auto x : start) {
      Q.push(State(-1, x, 0));
    }
    while (!Q.empty()) {
      State s = Q.front();
      Q.pop();
      if (visited[s.dst] == 0) {
        visited[s.dst] = 1;
        time_d[s.dst] = time++;
        from[s.dst] = s.src;
        dist[s.dst] = s.cost;
        for (auto x : V[s.dst]) {
          if (visited[x.dst] == 0) {
            Q.push(State(s.dst, x.dst, s.cost + x.cost));
          }
        }
      }
    }
  }  
};

int main () {
  int n;
  cin >> n;
  Graph graph(n);
  for (auto i = 0; i < graph.N; ++i) {
    int u, k;
    cin >> u >> k;
    --u;
    for (auto j = 0; j < k; ++j) {
      int v;
      cin >> v;
      --v;
      graph.add_edge(u, v);
    }
  }
  graph.bfs({0});
  for (auto i = 0; i < graph.N; ++i) {
    cout << i+1 << " ";
    if (graph.visited[i] == 0) {
      cout << -1 << endl;
    } else {
      cout << graph.dist[i] << endl;
    }
  }
}