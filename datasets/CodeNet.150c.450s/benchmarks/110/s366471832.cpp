#include <bits/stdc++.h>

using namespace std;

#define TEMP_T template<typename T>
TEMP_T void sort(T& v){ sort(v.begin(), v.end()); }
TEMP_T void revs(T& v){ reverse(v.begin(), v.end()); }
TEMP_T void uniq(T& v){ sort(v); v.erase(unique(v.begin(), v.end())); }
TEMP_T void show(T& v, char delim=' ', char end='\n'){ for(int i=0; i<v.size()-1; i++) cout << v[i] << delim; cout << v[v.size()-1] << end; }
TEMP_T T    cums(T& v){ T r; r.push_back(v[0]); for(int i=1; i<v.size(); i++) r.push_back(r[i-1] + v[i]); return r; }
TEMP_T void maxe(T& v, T m){ v = max(v, m); }
TEMP_T void mine(T& v, T m){ v = min(v, m); }

static inline int in(){ int x; scanf("%d", &x); return x; }

struct Edge {
  int f, t, c;
  Edge(int f, int t, int c) : f(f), t(t), c(c) {}
  bool operator<(const Edge& e) const { return c > e.c; }
};
typedef vector<Edge> Vertex;
typedef vector<Vertex> Graph;

struct Solver {
  Solver(int w, int h, int n) : w(w), h(h), G(w * h), pos(n + 1) {}
  int read_input(){
    for (int i = 0; i < h; i++){
      string s;
      cin >> s;
      field.push_back(s);
    }
    for (int y = 0; y < h; y++){
      for (int x = 0; x < w; x++){
        if (field[y][x] == 'X') continue;
        for (int d = 0; d < 4; d++){
          static const int dx[] = {1, -1, 0, 0};
          static const int dy[] = {0, 0, 1, -1};
          int ny = y + dy[d];
          int nx = x + dx[d];
          if (nx < 0 || nx >= w || ny < 0 || ny >= h) continue;
          if (field[ny][nx] == 'X') continue;
          G[y * w + x].push_back(Edge(y * w + x, ny * w + nx, 1));
        }
        if (isdigit(field[y][x])){
          pos[field[y][x] - '0'] = y * w + x;
        }
        if (field[y][x] == 'S'){
          pos[0] = y * w + x;
        }
      }
    }
    return (0);
  }
  int solve(){
    int sum = 0;
    for (int i = 0; i < pos.size() - 1; i++){
      sum += get_path_len(pos[i], pos[i + 1]);
    }
    return sum;
  }
  int get_path_len(int f, int t){
    int n = G.size();
    priority_queue<Edge> pQ;
    set<int> v;
    pQ.push(Edge(-1, f, 0));
    while (!pQ.empty()){
      Edge e = pQ.top();
      pQ.pop();
      if (e.t == t) return e.c;
      if (v.find(e.t) != v.end()) continue;
      v.insert(e.t);
      for (int i = 0; i < G[e.t].size(); i++){
        pQ.push(Edge(e.t, G[e.t][i].t, e.c + G[e.t][i].c));
      }
    }
    return -1;
  }

  vector<string> field;
  vector<int> pos;
  int w, h;
  Graph G;
};

int main()
{
  int w, h, n;
  h = in();
  w = in();
  n = in();
  Solver solver(w, h, n);
  solver.read_input();
  printf("%d\n", solver.solve());

  return (0);
}