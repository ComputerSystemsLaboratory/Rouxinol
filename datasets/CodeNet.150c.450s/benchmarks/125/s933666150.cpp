#include <iostream>
#include <algorithm>
#include <vector>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define repR(i, n) for(int i = (n) - 1; i > -1; i--)
#define rep1(i, n) for(int i = 1; i < (int)(n + 1); i++)
#define rep1R(i, n) for(int i = (n); i > 0; i--)
using namespace std;

const int WHITE = 0;
const int GRAY = 1;
const int BLACK = 2;

int n;
int M[110][110] = {};
int color[110];
int elapse = 0;
int d[110];
int f[110];

void dfs(int u) {
  color[u] = GRAY;
  d[u] = ++elapse;
  rep(v, n) {
    if (M[u][v] && color[v] == WHITE) dfs(v);
  }
  color[u] = BLACK;
  f[u] = ++elapse;
}

void dfs_init() {
  rep(i, n) color[i] = WHITE;
  rep(i, n) {
    if (color[i] == WHITE) dfs(i);
  }
}

int main() {
  cin >> n;
  rep(i, n) {
    int id, deg;
    cin >> id >> deg;
    --id;    // 0-indexedに直す
    rep(j, deg) {
      int v;
      cin >> v;
      --v;    // 0-indexedに直す
      ++M[id][v];
    }
  }
  dfs_init();
  rep(i, n) {
    cout << i + 1 << " " << d[i] << " " << f[i] << endl;
  }
  return 0;
}

