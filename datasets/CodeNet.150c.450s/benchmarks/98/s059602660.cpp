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
  int n, m;
  while (cin >> n >> m, m) {
    int sn[n], sm[m], sun = 0, sum = 0, a;
    rep(i, n) {
      cin >> sn[i];
      sun += sn[i];
    }
    rep(i, m) {
      cin >> sm[i];
      sum += sm[i];
    }
    sort(sn, sn + n);
    sort(sm, sm + m);
    a = sun - sum;
    rep(i, n) rep(j, m) if (sun + sm[j] - sn[i] == sum + sn[i] - sm[j]) {
      cout << sn[i] << ' ' << sm[j] << endl;
      goto end;
    }
    cout << -1 << endl;
  end:;
  }
  return 0;
}