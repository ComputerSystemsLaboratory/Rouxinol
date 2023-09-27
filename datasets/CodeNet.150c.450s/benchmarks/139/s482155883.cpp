#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <string>
#include <tuple>
#include <utility>
#include <vector>
using namespace std;
using ll = long long;
const int INF = 1000000009;
const ll LINF = 1e18;

vector<int> to[100001];

int main() {
  int n, m;
  cin >> n >> m;
  for (int i = 0; i < m; ++i) {
    int a, b;
    cin >> a >> b;
    --a;
    --b;
    to[a].push_back(b);
    to[b].push_back(a);
  }

  queue<int> q;
  vector<int> dist(n, INF);
  vector<int> pre(n, -1);
  q.push(0);
  while (!q.empty()) {
    int v = q.front();
    q.pop();
    for (int u : to[v]) {
      if (dist[u] != INF) continue;
      dist[u] = dist[v] + 1;
      pre[u] = v;
      q.push(u);
    }
  }

  cout << "Yes" << endl;
  for (int i = 0; i < n; ++i) {
    if (i == 0) continue;
    int ans = pre[i];
    ++ans;
    cout << ans << endl;
  }
}
