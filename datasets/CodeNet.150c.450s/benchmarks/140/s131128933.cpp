#include <algorithm>
#include <cmath>
#include <cstdio>
#include <deque>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>

using namespace std;

typedef long long ll;

#define MOD 1000000007

struct UnionFind {
  vector<int> data;
  void init(int n) { data.assign(n, -1); }
  int root(int x) { return data[x] < 0 ? x : data[x] = root(data[x]); }
  bool same(int x, int y) { return root(x) == root(y); }
  bool unite(int x, int y) {
    x = root(x), y = root(y);
    if (x != y) {
      if (data[y] < data[x]) swap(x, y);
      data[x] += data[y];
      data[y] = x;
    }
    return x != y;
  }
  int size(int x) { return -data[root(x)]; }
};

int main() {
  int v, e;
  cin >> v >> e;
  vector<pair<int, pair<int, int> > > p(e);
  for (int i = 0; i < e; ++i) {
    int s, t, w;
    cin >> s >> t >> w;
    p[i].first = w;
    p[i].second.first = s;
    p[i].second.second = t;
  }
  sort(p.begin(), p.end());
  int ans = 0;
  UnionFind uf;
  uf.init(v);
  for (int i = 0; i < e; ++i) {
    if (!uf.same(p[i].second.first, p[i].second.second)) {
      ans += p[i].first;
      uf.unite(p[i].second.first, p[i].second.second);
    }
  }
  cout << ans << endl;
  return 0;
}
