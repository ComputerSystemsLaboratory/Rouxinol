#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
using vvi = vector<vi>;
using vll = vector<ll>;
using vvll = vector<vll>;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
constexpr ll MAX = LLONG_MAX / 2 - 1;

void floyd(vvll &a) {
  int v = (int)a.size();
  rep(k, v) {
    rep(i, v) {
      if (a[i][k] == MAX) continue;
      rep(j, v) {
        if (a[k][j] == MAX) continue;
        a[i][j] = min(a[i][j], a[i][k] + a[k][j]);
      }
    }
  }
}

int main() {
  int v, e;
  cin >> v >> e;
  
  vvll a(v, vll(v, MAX));
  rep(i, v) rep(j, v) if (i == j) a[i][j] = 0;

  int s, t, d;
  rep(i, e) {
    cin >> s >> t >> d;
    a[s][t] = d;
  }

  floyd(a);

  rep(i, v) {
    if (a[i][i]  < 0) {
      printf("NEGATIVE CYCLE\n");
      return 0;
    }
  }

  rep(i, v) {
    rep(j, v) {
      if (j) cout << " ";
      if (a[i][j] == MAX) printf("INF");
      else printf("%lld", a[i][j]);
    }
    cout << endl;
  }
}

