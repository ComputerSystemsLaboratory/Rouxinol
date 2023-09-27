// Undone
#include <bits/stdc++.h>
#define int long long
#define double long double
#define INF 1e18
#define MOD 1000000007
using namespace std;
signed main() {
  int N, M;
  cin >> N;
  vector<string> U(N);
  for (int i = 0; i < N; i++) {
    cin >> U[i];
  }

  cin >> M;
  int state = 0; // 0:locked, 1:unlocked
  for (int i = 0; i < M; i++) {
    string s; cin >> s;
    int unknown = 1;
    for (int j = 0; j < N; j++) {
      if (s == U[j]) {
        if (state == 0) {
          state = 1;
          cout << "Opened by ";
        } else {
          state = 0;
          cout << "Closed by ";
        }
        cout << s << endl;
        unknown = 0;
        break;
      }
    }
    if (unknown) {
      cout << "Unknown " << s << endl;
    }
  }
}


