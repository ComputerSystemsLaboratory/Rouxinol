#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <climits>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define repR(i, n) for(int i = (n) - 1; i > -1; i--)
#define rep1(i, n) for(int i = 1; i < (int)(n + 1); i++)
#define rep1R(i, n) for(int i = (n); i > 0; i--)
using namespace std;

static const int INFTY = INT_MAX;
static const int WHITE = 0;
static const int GRAY = 1;
static const int BLACK = 2;

int n;
int M[110][110] = {};
int color[110];
int d[110];
queue<int> Q;

void bfs(int s) {
  rep(u, n) color[u] = WHITE;
  rep(u, n) d[u] = INFTY;

  color[s] = GRAY;
  d[s] = 0;
  Q.push(s);

  while (!Q.empty()) {
    int u = Q.front(); Q.pop();
    rep(v, n) {
      if (M[u][v] && color[v] == WHITE) {
        color[v] = GRAY;
        d[v] = d[u] + 1;
        Q.push(v);
      }
    }
    color[u] = BLACK;
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
  bfs(0);
  rep(i, n) {
    cout << i + 1 << " ";
    if (d[i] != INFTY) cout << d[i];
    else cout << -1;
    cout << endl;
  }
  return 0;
}

