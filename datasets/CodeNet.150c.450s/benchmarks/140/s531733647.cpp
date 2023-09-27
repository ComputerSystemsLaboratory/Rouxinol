#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct weight {
  int s, t, w;
};

bool operator<(const weight &l, const weight &r) { return l.w < r.w; }
int p[10000], r[10000];

int findSet(int x) {
  if (p[x] != x) p[x] = findSet(p[x]);
  return p[x];
}
void unite(int x, int y) {
  x = findSet(x);
  y = findSet(y);
  if (r[x] < r[y]) {
    p[x] = p[y];
  } else {
    p[y] = p[x];
    if (r[x] == r[y]) r[x]++;
  }
}
int same(int x, int y) {
  if (findSet(x) == findSet(y)) return true;
  return false;
}

int main() {
  int v, e, totalw = 0;
  weight tw;
  vector<weight> w;
  cin >> v >> e;
  for (int i = 0; i < v; i++) {
    p[i] = i;
    r[i] = 0;
  }
  for (int i = 0; i < e; i++) {
    cin >> tw.s >> tw.t >> tw.w;
    w.push_back(tw);
  }
  sort(w.begin(), w.end());

  for (int i = 0; i < e; i++) {
    tw = w[i];
    if (!same(tw.s, tw.t)) {
      unite(tw.s, tw.t);
      totalw += tw.w;
    }
  }
  cout << totalw << endl;
  return 0;
}

