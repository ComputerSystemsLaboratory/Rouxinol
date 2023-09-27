#include <bits/stdc++.h>
using namespace std;
template <class T, class U>
ostream &operator<<(ostream &os, const pair<T, U> &p) {
  os << "(" << p.first << "," << p.second << ")";
  return os;
}
#ifdef __LOCAL
#define debug(x) cerr << __LINE__ << ": " << #x << " = " << x << endl
#define debugArray(x, n)                           \
  cerr << __LINE__ << ": " << #x << " = {";        \
  for (long long hoge = 0; (hoge) < (n); ++(hoge)) \
    cerr << ((hoge) ? "," : "") << x[hoge];        \
  cerr << "}" << endl
#else
#define debug(x) (void(0))
#define debugArray(x, n) (void(0))
#endif

signed main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int N, M;
  cin >> N >> M;
  vector<vector<int>> graph(N);
  for (int i = 0; i < M; i++) {
    int A, B;
    cin >> A >> B;
    A--, B--;
    graph[A].push_back(B);
    graph[B].push_back(A);
  }
  int prev[N];
  fill(prev, prev + N, -1);
  int dist[N];
  fill(dist, dist + N, 1e9);
  queue<pair<int, int>> que;
  que.push(make_pair(0, 0));
  dist[0] = 0;
  while (!que.empty()) {
    int v, p;
    tie(v, p) = que.front();
    que.pop();
    if (prev[v] != -1) continue;
    prev[v] = p;
    for (int u : graph[v]) {
      if (dist[u] > dist[v] + 1) {
        dist[u] = dist[v] + 1;
        que.push(make_pair(u, v));
      }
    }
  }
  bool isok = true;
  for (int i = 1; i < N; i++) isok &= prev[i] != -1;
  if (isok) {
    cout << "Yes" << endl;
    for (int i = 1; i < N; i++) cout << prev[i] + 1 << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}
