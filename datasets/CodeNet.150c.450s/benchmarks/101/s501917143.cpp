#include <iostream>
#include <queue>
#include <set>
using namespace std;

const int MAX_N = 100000;

int G[MAX_N];
set<int> A[MAX_N];

void assign_gid(int user_num) {
  int gid;
  queue<int> Q;

  Q.push(0);
  G[0] = gid = 0;

  while (!Q.empty()) {
    int c = Q.front(); Q.pop();

    if (G[c] == -1) G[c] = ++gid;

    for (set<int>::iterator it = A[c].begin(); it != A[c].end(); it++) {
      if (G[*it] == -1) {
        G[*it] = gid;
        Q.push(*it);
      }
    }

    if (Q.empty()) {
      for (int i = 1; i < user_num; i++) {
        if (G[i] == -1) {
          Q.push(i);
          break;
        }
      }
    }
  }
}

int main() {
  int n, m; cin >> n >> m;

  for (int i = 0; i < n; i++) G[i] = -1;

  for (int i = 0; i < m; i++) {
    int s, d; cin >> s >> d;
    A[s].insert(d);
    A[d].insert(s);
  }

  assign_gid(n);

  int q; cin >> q;

  for (int i = 0; i < q; i++) {
    int s, d; cin >> s >> d;
    if (G[s] == G[d]) cout << "yes";
    else cout << "no";
    cout << endl;
  }

  return 0;
}