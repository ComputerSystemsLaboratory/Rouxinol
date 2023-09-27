#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define repR(i, n) for(int i = (n) - 1; i > -1; i--)
#define rep1(i, n) for(int i = 1; i < (int)(n + 1); i++)
#define rep1R(i, n) for(int i = (n); i > 0; i--)
using namespace std;
static const int MAX = 100000;
int n, m, q;
int color[MAX] = {};
vector<int> G[MAX];

void searchGraph(int u, int c) {
  color[u] = c;
  for (size_t i = 0; i < G[u].size(); ++i) {
    int v = G[u][i];
    if (color[v] == 0) searchGraph(v, c);
  }
}

int main() {
  cin >> n >> m;
  rep(i, m) {
    int s, t;
    cin >> s >> t;
    G[s].push_back(t);
    G[t].push_back(s);
  }
  int c = 1;
  rep(i, n) {
    if (color[i] == 0) searchGraph(i, c);
    ++c;
  }
  cin >> q;
  rep(i, q) {
    int s, t;
    cin >> s >> t;
    if (color[s] == color[t]) cout << "yes" << endl;
    else cout << "no" << endl;
  }
  return 0;
}

