#include <bits/stdc++.h>
using namespace std;

int main() {
  for(int N, M; cin >> N >> M && (N|M); ) {
    vector<int> h(N), w(M);
    for(int i = 0; i < N; ++i) cin >> h[i];
    for(int j = 0; j < M; ++j) cin >> w[j];
    map<int, int> m;
    for(int i = 0; i < N; ++i) {
      for(int j = i, k = 0; j < N; ++j) {
        k += h[j];
        m[k] += 1;
      }
    }
    int res = 0;
    for(int i = 0; i < M; ++i) {
      for(int j = i, k = 0; j < M; ++j) {
        k += w[j];
        if(m.count(k)) res += m[k];
      }
    }
    cout << res << endl;
  }
  return 0;
}