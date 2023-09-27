#include <iostream>
#include <stack>
using namespace std;
const int MAX_N = 100;

int A[MAX_N+1][MAX_N+1];
pair<int, int> TIMESTAMPS[MAX_N+1];
int N;

void solve() {
  int ts = 0;
  stack<int> S;

  for (int i = N; i > 0; i--) {
    if (TIMESTAMPS[i].first == 0) S.push(i);
  }

  while (!S.empty()) {
    int c = S.top();

    if (TIMESTAMPS[c].first == 0)
      TIMESTAMPS[c].first = ++ts;

    for (int i = N; i > 0; i--) {
      if (A[c][i] == 1 && TIMESTAMPS[i].first == 0)
        S.push(i);
    }

    if (S.top() == c) {
      if (TIMESTAMPS[c].second == 0)
        TIMESTAMPS[c].second = ++ts;
      S.pop();
    }
  }
}

int main() {
  cin >> N;

  for (int i = 1; i <= N; i++) {
    for (int j = 1; j <= N; j++) {
      A[i][j] = 0;

    }
    TIMESTAMPS[i] = make_pair(0, 0);
  }

  for (int i = 0; i < N; i++) {
    int u, k; cin >> u >> k;
    for (int j = 0; j < k; j++) {
      int t; cin >> t;
      A[u][t] = 1;
    }
  }

  solve();

  for (int i = 1; i <= N; i++) {
    cout << i << ' '
         << TIMESTAMPS[i].first << ' '
         << TIMESTAMPS[i].second << endl;
  }

  return 0;
}