#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define WHITE 0
#define GRAY 1
#define BLACK 2
#define INF 2100

int main() {
  int n; cin >> n;
  vector<vector<int>> G(n, vector<int>(n));
  rep(i, n)rep(j, n) cin >> G.at(i).at(j);

  vector<int> color(n); vector<int> mindis(n);
  rep(i, n) mindis.at(i) = INF;
  vector<int> par(n);
  int ans = 0;
  mindis.at(0) = 0;
  color.at(0) = GRAY;
  par.at(0) = -1;

  while (true) {
    int m = INF;
    int now = 0;
    rep(i, n) {
      if (color.at(i) == GRAY && mindis.at(i) < m) {
        m = mindis.at(i);
        now = i;
      }
    }

    if (m == INF) break;

    color.at(now) = BLACK;
    if (par.at(now) != -1) {
      ans += G.at(par.at(now)).at(now);
    }

    rep(i, n) {
      if (G.at(now).at(i) < mindis.at(i) && G.at(now).at(i) != -1 && color.at(i) != BLACK) {
        mindis.at(i) = G.at(now).at(i);
        color.at(i) = GRAY;
        par.at(i) = now;
      }
    }
  }
  cout << ans << endl;
}

