#define dbg(...) fprintf(stderr,__VA_ARGS__)
#define dpr(x) cerr<<#x<<": "<<x<<endl;
#define dprc(c) do{cerr<<#c<<":";for(auto&_i:(c)){cerr<<" "<<_i;}cerr<<endl;}while(0)
#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<vi> vvi;
int INF = 1e9+7;
#define all(c) (c).begin(), (c).end()
#define tr(i,c) for(auto i=(c).begin();i!=(c).end();i++)
#define rtr(i,c) for(auto i=(c).rbegin();i!=(c).rend();i++)
#define rep(i,b) for(auto i=0;i<(b);i++)
#define pb push_back
#define sz(c) int((c).size())

#define MAX_N 110

class UnionFind {
public:
  UnionFind(size_t s) : parent_(s), rank_(s, 0) {
    for (size_t i = 0; i < s; i++) {
      parent_[i] = i;
    }
  }

  void unite(size_t x, size_t y) {
    size_t xp = find(x);
    size_t yp = find(y);

    if (xp == yp) return;
    if (rank_[xp] < rank_[yp]) {
      parent_[xp] = parent_[yp];
    } else {
      if (rank_[xp] == rank_[yp]) rank_[xp]++;
      parent_[yp] = parent_[xp];
    }
  }

  bool is_same(size_t x, size_t y) {
    return find(x) == find(y);
  }

  size_t find(size_t x) {
    if (parent_[x] == x) return x;
    else return parent_[x] = find(parent_[x]);
  }

  size_t size() const {
    return parent_.size();
  }

private:
  vector<int> parent_;
  vector<int> rank_;
};

struct edge {
  int w, v, u;
};

void printuf(UnionFind& uf) {
  for (int i = 0; i < sz(uf); i++) {
    fprintf(stderr, " %-2d", i);
  }
  puts("");
  for (int i = 0; i < sz(uf); i++) {
    fprintf(stderr, " %-2lu", uf.find(i));
  }
  puts("");
}

int main(int argc, char **argv)
{

  int n;
  scanf("%d", &n);

  vector<edge> E;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      int x;
      scanf("%d", &x);
      if (i >= j) continue;
      edge e = {x, i, j};
      if (x >= 0) E.pb(e);
    }
  }

  sort(all(E), [=](const edge& lhs, const edge& rhs) { return lhs.w < rhs.w; });

  UnionFind S(n);

  int total = 0;

  for (int i = 0; i < sz(E); i++) {
    edge& e = E[i];

    int v = S.find(e.v);
    int u = S.find(e.u);

    if (v == u) continue;
    total += e.w;
    S.unite(e.v, e.u);
  }

  printf("%d\n", total);

  return 0;
}