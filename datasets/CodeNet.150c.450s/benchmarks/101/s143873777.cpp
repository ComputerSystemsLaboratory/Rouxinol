#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

const int MAX = 100005;
const int NIL = -1;
int n;
vector<int> G[MAX];
int color[MAX];


void dfs(int r, int c) {
  color[r] = c;
  for (int u: G[r]) {
    if (color[u] == NIL) {
      dfs(u, c);
    }
  }
}

int main() {
  int m, s, t, q;
  cin >> n >> m;
  for (int i = 0; i < m; i++) {
    cin >> s >> t;
    G[s].push_back(t);
    G[t].push_back(s);
  }
  int color_id {0};
  memset(color, NIL, sizeof color);
  for (int i = 0; i < n; i++) {
    if (color[i] == NIL) {
      dfs(i, color_id++);
    }
  }

  cin >> q;
  for (int i = 0; i < q; i++) {
    cin >> s >> t;
    if (color[s] == color[t]) {
      cout << "yes" << endl;
    } else {
      cout << "no" << endl;
    }
  }
  return 0;
}

