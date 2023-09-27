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

vector<int> g[100000];
vector<bool> visit(100000);
vector<int> col(100000);
int c = 1;

void dfs(int v) {
  col[v] = c;
  visit[v] = true;
  for (auto u : g[v]) {
    if (!visit[u]) {
      dfs(u);
    }
  }
}

int main() {
  int n, m;
  cin >> n >> m;
  for (int i = 0; i < m; ++i) {
    int s, t;
    cin >> s >> t;
    g[s].push_back(t);
    g[t].push_back(s);
  }
  for (int i = 0; i < n; ++i) {
    if (!visit[i]) {
      dfs(i);
      c++;
    }
  }
  int q;
  cin >> q;
  for (int i = 0; i < q; ++i) {
    int s, t;
    cin >> s >> t;
    cout << (col[s] == col[t] ? "yes" : "no") << endl;
  }
  return 0;
}
