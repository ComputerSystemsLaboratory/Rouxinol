#include<iostream>
#include<algorithm>
#include<vector>
#include<stdio.h>
#include<cstring>
#include<math.h>
#include<map>
#include<bitset>
#include<iomanip>
#include<queue>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
using P = pair<int, int>;

struct UnionFind {
    vector<int> par; // par[i]:iの親の番号　(例) par[3] = 2 : 3の親が2

    UnionFind(int N) : par(N) { //最初は全てが根であるとして初期化
        for(int i = 0; i < N; i++) par[i] = i;
    }

    int root(int x) { // データxが属する木の根を再帰で得る：root(x) = {xの木の根}
        if (par[x] == x) return x;
        return par[x] = root(par[x]);
    }

    void unite(int x, int y) { // xとyの木を併合
        int rx = root(x); //xの根をrx
        int ry = root(y); //yの根をry
        if (rx == ry) return; //xとyの根が同じ(=同じ木にある)時はそのまま
        par[rx] = ry; //xとyの根が同じでない(=同じ木にない)時：xの根rxをyの根ryにつける
    }

    bool same(int x, int y) { // 2つのデータx, yが属する木が同じならtrueを返す
        int rx = root(x);
        int ry = root(y);
        return rx == ry;
    }
};

int V, E;
pair<int, pair<int, int>> p[100000];


int main() {
  cin >> V >> E;
  UnionFind tree(V);

  rep(i, E) {
    int s, t, w;
    cin >> s >> t >> w;
    p[i].first = w;
    p[i].second = make_pair(s, t);
  }

  sort(p, p+E);
  int ans = 0;
  rep(i, E) {
    int s = p[i].second.first;
    int t = p[i].second.second;
    if(tree.same(s, t)) {
      continue;
    } else {
      tree.unite(s, t);
      ans += p[i].first;
    }
  }

  cout << ans << endl;

  return 0;
}
