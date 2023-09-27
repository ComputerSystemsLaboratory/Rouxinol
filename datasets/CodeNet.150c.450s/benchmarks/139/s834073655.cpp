#include <bits/stdc++.h>
using namespace std;
int main()
  {int N, M; cin >> N >> M;
  vector<vector<int>> g(N);
  for (int i = 0; i < M; ++i) {int A, B; cin >> A >> B; g[--A].push_back(--B); g[B].push_back(A);}
  vector<int> ans(N);
  queue<int> q; ans[0] = -1; q.push(0);
  while (q.size())
    {auto v = q.front(); q.pop();
    for (auto u : g[v]) {if (!ans[u]) {ans[u] = v + 1; q.push(u);}}}
  puts("Yes"); for (int i = 1; i < N; ++i) cout << ans[i] << endl;}