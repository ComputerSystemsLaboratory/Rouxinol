#include <algorithm>
#include <cstdio>
#include <set>
#include <vector>

using namespace std;

struct Edge {
  int s;
  int t;
  int w;
  Edge(int s, int t, int w) {
    this->s = s;
    this->t = t;
    this->w = w;
  }
};

bool cmp(const Edge& e1, const Edge& e2) {
  return e1.w < e2.w;
}

vector<Edge> edges;
vector<int> dsj;

int V, E;
int res;
int resv;

void input() {
  scanf("%d %d", &V, &E);
  for (int i = 0; i < E; i++) {
    int s, t, w;
    scanf("%d %d %d", &s, &t, &w);
    edges.emplace_back(s, t, w);
  }
  for (int i = 0; i < V; i++) {
    dsj.push_back(i);
  }
}

int dsjof(int x) {
  vector<int> updates;
  while (dsj[x] != x) {
    updates.push_back(x);
    x = dsj[x];
  }
  for (int i : updates) {
    dsj[i] = x;
  }
  return x;
}

void merge(int a, int b) {
  int p1 = dsjof(a);
  int p2 = dsjof(b);
  if (p1 < p2) {
    dsj[p1] = p2;
  } else {
    dsj[p2] = p1;
  }
}

void printDsj() {
  printf("===\n");
  for (int i = 0; i < V; i++) {
    printf("\t%d", i);
  }
  printf("\n");
  for (int i = 0; i < V; i++) {
    printf("\t%d", dsj[i]);
  }
  printf("\n===\n");
}

void solve() {
  // sort edges by weight
  sort(edges.begin(), edges.end(), cmp);

  for (const auto& e : edges) {
    if (resv == V) {
      break;
    }
    //printDsj();
    if (dsjof(e.s) != dsjof(e.t)) {
      //printf("Including edge %d %d %d\n", e.s, e.t, e.w);
      resv += 1;
      if (resv == 1) {
        resv += 1;
      }
      merge(e.s, e.t);
      res += e.w;
    }
  }
}

void output() {
  printf("%d\n", res);
  // for (const auto& x : edges) {
  //   printf("s:%d t:%d w:%d\n", x.s, x.t, x.w);
  // }
}

int main() {
  input();
  solve();
  output();
}