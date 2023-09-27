#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<ll> VL;
typedef vector<VL> VVL;
typedef pair<int, int> PII;

#define FOR(i, a, n) for (ll i = (ll)a; i < (ll)n; ++i)
#define REP(i, n) FOR(i, 0, n)
#define ALL(x) x.begin(), x.end()
#define MOD 1000000007
#define INF (1LL << 25) // 33554432
#define PI 3.14159265359
#define EPS 1e-12
//#define int ll

int t[90000];
signed main(void) {
  while (true) {
    int n;
    string s[10010], f[10010];
    cin >> n;
    if (n == 0)
      break;
    REP(i, 86401) t[i] = 0;
    REP(i, n) {
      cin >> s[i] >> f[i];
      int sh = stoi(s[i].substr(0, 2)), sm = stoi(s[i].substr(3, 2)),
          ss = stoi(s[i].substr(6, 2)), fh = stoi(f[i].substr(0, 2)),
          fm = stoi(f[i].substr(3, 2)), fs = stoi(f[i].substr(6, 2));
      t[sh * 60 * 60 + sm * 60 + ss]++;
      t[fh * 60 * 60 + fm * 60 + fs]--;
      // cout << sh*60*60+sm*60+ss << " " << fh*60*60+fm*60+fs << endl;
    }

    FOR(i, 1, 86401) { t[i] += t[i - 1]; }

    int ret = 0;
    REP(i, 86401) { ret = max(ret, t[i]); }
    cout << ret << endl;
  }

  return 0;
}