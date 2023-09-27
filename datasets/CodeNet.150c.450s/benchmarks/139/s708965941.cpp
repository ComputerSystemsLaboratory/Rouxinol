#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> ans(N, -1), visited(N);
  vector<vector<int>> edge(N);
  for (int i = 0; i < M; i++) {
    int A, B;
    cin >> A >> B;
    A--, B--;
    edge[A].push_back(B);
    edge[B].push_back(A);
  }

  queue<int> que;
  que.push(0);
  ans[0] = 0;
  while (!que.empty()) {
    int now = que.front();
    que.pop();
    for (int u : edge[now]) {
      if (ans[u] >= 0) continue;
      ans[u] = now;
      que.push(u);
    }
  }
  cout << "Yes" << endl;
  for (int i = 1; i < N; i++) {
    cout << ans[i] + 1 << endl;
  }
}