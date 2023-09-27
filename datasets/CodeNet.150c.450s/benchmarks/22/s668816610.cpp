#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG

const int INF = 1e9 + 10;

template <typename itr> void output(itr first, itr last) {
  for (auto iter = first; iter != last; ++iter) {
    for (int i : *iter) {
      if (i == INF)
        cerr << "INF"
             << ", ";
      else
        cerr << i << ", ";
    }
    cerr << endl;
  }
  cerr << endl;
}

int main() {
  int V, E, r;
  cin >> V >> E >> r;
  vector<int> S(E), T(E), D(E);
  vector<int> C(V, INF);
  bool n_cycle = false;
  vector<bool> checked(V, false);
  C[r] = 0;
  checked[r] = true;
  for (int i = 0; i < E; i++) {
    cin >> S[i] >> T[i] >> D[i];
  }
  for (int i = 0; i < V + 10; i++) {
    bool update = false;
    for (int i = 0; i < E; i++) {
      int s = S[i], t = T[i], d = D[i];
      if (checked[s] && C[s] + d < C[t]) {
        C[t] = C[s] + d;
        checked[t] = true;
        update = true;
      }
    }
    if (!update) {
      break;
    }
    if (i == V + 1) {
      n_cycle = true;
      break;
    }
  }
  if (n_cycle) {
    cout << "NEGATIVE CYCLE" << endl;
    return 0;
  }
  for (int i : C) {
    if (i == INF)
      cout << "INF" << endl;
    else
      cout << i << endl;
  }
}

