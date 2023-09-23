#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define shosu(n) setprecision(n)
#define INF 999999999
using namespace std;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<char> vc;
typedef vector<bool> vb;
typedef vector<string> vs;
typedef vector<pii> vpii;
typedef vector<vi> vvi;
typedef vector<vb> vvb;
typedef vector<vpii> vvpii;

int main() {
  int N, M, w;
  while (cin >> N, N) {
    bool mp[25][25] = {};
    int sx = 10, sy = 10;
    rep(i, N) {
      int a, b;
      cin >> a >> b;
      mp[b][a] = 1;
    }
    cin >> M;
    char s;
    rep(i, M) {
      cin >> s >> w;
      if (s == 'N') {
        rep(j, w) {
          sy++;
          mp[sy][sx] = 0;
        }
      }
      if (s == 'S') {
        rep(j, w) {
          sy--;
          mp[sy][sx] = 0;
        }
      }
      if (s == 'E') {
        rep(j, w) {
          sx++;
          mp[sy][sx] = 0;
        }
      }
      if (s == 'W') {
        rep(j, w) {
          sx--;
          mp[sy][sx] = 0;
        }
      }
    }
    bool ans = 1;
    rep(i, 25) rep(j, 25) if (mp[i][j]) ans = 0;
    cout << (ans ? "Yes" : "No") << endl;
  }
  return 0;
}
 