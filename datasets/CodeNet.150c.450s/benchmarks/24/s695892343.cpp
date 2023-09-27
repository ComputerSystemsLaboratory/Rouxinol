/*
 * Princess's Marriage
 * http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=2019
 */

#include <bits/stdc++.h>

using namespace std;

#define LOG(...) fprintf(stderr, __VA_ARGS__)
//#define LOG(...)
#define FOR(i, a, b) for(int i = (int)(a); i < (int)(b); ++i)
#define REP(i, n) for(int i = 0; i < (int)(n); ++i)
#define ALL(a) (a).begin(), (a).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define EXIST(s, e) ((s).find(e) != (s).end())
#define SORT(c) sort(ALL(c))
#define RSORT(c) sort(RALL(c))
#define SQ(n) (n) * (n)

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<bool> vb;
typedef vector<int> vi;
typedef vector<pii> vpi;
typedef vector<pll> vpl;
typedef vector<ll> vll;
typedef vector<vb> vvb;
typedef vector<vi> vvi;
typedef vector<vll> vvll;

int main() {
  ll n, m;
  while (cin >> n >> m, n | m) {
    vpi d(n);
    REP(i, n){
      cin >> d[i].second >> d[i].first;
    }
    RSORT(d);
    ll cost = 0;
    REP(i, n){
      if (m > 0) {
        m -= d[i].second;
        if(m < 0) {
          cost -= m * d[i].first;
        }
      } else {
        cost += d[i].second * d[i].first;
      }
    }
    cout << cost << endl;
  }
}