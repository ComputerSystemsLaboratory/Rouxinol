#include <bits/stdc++.h>
using namespace std;

#define fs first
#define sc second
#define pb emplace_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

using pii = pair<int, int>;
using vi = vector<int>;
using lint = long long;

const int inf = 1001001001;
const lint linf = 1001001001001001001ll;
const int mod = 1e9 + 7;
const int dx[]{0, 1, 0, -1, -1, -1, 1, 1}, dy[]{1, 0, -1, 0, -1, 1, -1, 1};

template<typename T> inline bool chmin(T &a, T b) { if (a > b) { a = b; } return a > b; }
template<typename T> inline bool chmax(T &a, T b) { if (a < b) { a = b; } return a < b; }
template<typename T> inline void print(const T &x, string s = "\n") { cout << x << s; }
template<typename T> inline void print(const vector<T> &v, string s = " ")
{ if (!v.size()) puts(""); rep(i, v.size()) cout << v[i] << (i + 1 == v.size() ? "\n" : s); }
inline bool inside(int y, int x, int H, int W) { return 0 <= y && y < H && 0 <= x && x < W; }
inline lint in() { lint x; std::cin>>x; return x; }

struct UnionFind {
	vector<int> p, r;

	UnionFind() {}
	UnionFind(int size) { init(size); }

	void init(int size) {
		p.resize(size);
		r.resize(size);
		for (int i = 0; i < size; ++i) {
			p[i] = i; r[i] = 1;
		}
	}

	int root(int x) {
		if (p[x] == x) return x;
		else return p[x] = root(p[x]);
	}

	void unite(int x, int y) {
		x = root(x); y = root(y);

		if (x == y) return;

		if (r[x] > r[y]) swap(x, y);
		r[x] += r[y];
		p[y] = x;
	}

	bool is_root(int x) {
		return root(x) == x;
	}

	bool same(int x, int y) {
		return root(x) == root(y);
	}

	int element_count(int x) {
		x = root(x);
		return r[x];
	}
};

signed main() {
  int h, w;
  while (cin >> w >> h, w) {
    char c[30][30];
    rep(i, 30) rep(j, 30) c[i][j] = '#';

    for (int i = 1; i <= h; ++i) {
      for (int j = 1; j <= w; ++j) {
        cin >> c[i][j];
      }
    }

    UnionFind uf(h * w + 200);

    int s = -1;

    for (int i = 1; i <= h; ++i) {
      for (int j = 1; j <= w; ++j) {
        if (c[i][j] == '#') continue;
        if (c[i][j] == '@') {
          s = i * w + j;
        }

        int v = i * w + j;

        rep(k, 4) {
          int y = i + dy[k];
          int x = j + dx[k];
          if (c[y][x] == '#') continue;

          int u = y * w + x;

          uf.unite(u, v);
        }
      }
    }

    cout << uf.element_count(s) << endl;
  }
}