#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
/* clang-format off */
#define MOD 1000000007
#define INF 1000000000
#define REP(i, n) for (ll i = 0, i##_len = (n); i < i##_len; ++i)
#define ALL(a) (a).begin(), (a).end()
#define __DEBUG__
#ifdef __DEBUG__
#define CH_P(a) cout <<"check_point("<<#a<<")" << "\n";
#define DEBUG(x) cout<<#x<<":"<<x<<"\n"
#define DEBUGS(v) cout << #v << ":";for(auto x:v){cout<<x<<" ";}cout<<"\n"
#endif
#ifndef __DEBUG__
#define CH_P(a) 
#define DEBUG(x) 
#define DEBUGS(v) 
#endif
#define TIMER_S(start) chrono::system_clock::time_point start = chrono::system_clock::now();
#define TIMER_E(end) chrono::system_clock::time_point end = chrono::system_clock::now();
#define TIME(start, end) cout << static_cast<double>(chrono::duration_cast<chrono::microseconds>(end - start).count()) << "ms" << "\n";
/* clang-format on */

ll d;
vector<ll> c(26);
vector<vector<ll>> s(365, vector<ll>(26));
vector<ll> t(365);
vector<ll> last(26, -1);

ll score(ll type, ll day, ll sc) {
  ll s_now = sc + s[day][type];
  REP(i, 26) { s_now -= c[i] * (day - last[i]); }
  return s_now;
}

int main() {
  cin >> d;
REP(i, 26) { cin >> c[i]; }

    REP(i, d) {
      REP(j, 26) { cin >> s[i][j]; }
    }

  REP(i, d) {
    cin >> t[i];
    t[i]--;
  }

  ll ss = 0;
  REP(i, d) {
    last[t[i]] = i;
    cout << score(t[i], i, ss) << "\n";
    ss = score(t[i], i, ss);
  }
  return 0;
}
